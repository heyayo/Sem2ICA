#include "Scene2.h"
#include "GL/glew.h"

#include "ext/matrix_clip_space.hpp"
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Input.hpp"

Scene2::Scene2()
{
}

Scene2::~Scene2()
{
}

void Scene2::Init()
{
	camera.init(45.f,45.f,10.f);
	// Set background color to dark blue
	glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

	//Enable depth buffer and depth testing
	glEnable(GL_DEPTH_TEST);

	//Enable back face culling
	glEnable(GL_CULL_FACE);

	//Default to fill mode
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	// Generate a default VAO for now
	glGenVertexArrays(1, &m_vertexArrayID);
	glBindVertexArray(m_vertexArrayID);

	// Load the shader programs
	m_programID = LoadShaders("Shader//TransformVertexShader.vertexshader",
								"Shader//SimpleFragmentShader.fragmentshader");
	glUseProgram(m_programID);

	// Get a handle for our "MVP" uniform
	m_parameters[U_MVP] = glGetUniformLocation(m_programID, "MVP");

	// Init VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		meshList[i] = nullptr;
	}

	meshList[GEO_AXES] = MeshBuilder::GenerateAxes("Axes", 10000.f, 10000.f, 10000.f);
	meshList[GEO_CIRCLE] = MeshBuilder::GenerateCircle("CIRCLE", {255,255,255},1.f,64);
	meshList[GEO_SPHERE] = MeshBuilder::GenerateSphere("SPHERE", {0,0,255}, 1.f, 64);
	meshList[GEO_DONUT] = MeshBuilder::GenerateDonut("DONUT", {255,0,0}, 1.f, 0.1f, 64);
}

void Scene2::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress();

	camera.update(dt);
}

void Scene2::Render()
{
	// Clear color buffer every frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glm::mat4 view = glm::lookAt(
		camera.position,
		camera.target,
		camera.up
	);

	glm::mat4 projection = glm::mat4(1.f);
	if (projType)
		projection = glm::perspective(45.f,4.0f/3.0f,0.1f,1000.f);
	else
		projection = glm::ortho(-10.f,10.f,-10.f,10.f,0.1f,1000.f);

	// Setup Model View Projection matrix
	glm::mat4 model(1.f);
	glm::mat4 MVP = projection * view * model;
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	meshList[GEO_AXES]->Render();
	//meshList[GEO_CIRCLE]->Render();
	meshList[GEO_SPHERE]->Render();
	meshList[GEO_DONUT]->Render();

	// Render objects

}

void Scene2::Exit()
{
	// Cleanup VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		if (meshList[i])
		{
			delete meshList[i];
		}
	}
	glDeleteVertexArrays(1, &m_vertexArrayID);
	glDeleteProgram(m_programID);
}

void Scene2::HandleKeyPress() 
{
	auto in = Input::GetInstance();
	if (in->IsKeyPressed(GLFW_KEY_1))
	{
		// Key press to enable culling
		glEnable(GL_CULL_FACE);
	}
	if (in->IsKeyPressed(GLFW_KEY_2))
	{
		// Key press to disable culling
		glDisable(GL_CULL_FACE);
	}
	if (in->IsKeyPressed(GLFW_KEY_3))
	{
		// Key press to enable fill mode for the polygon
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); //default fill mode
	}
	if (in->IsKeyPressed(GLFW_KEY_4))
	{
		// Key press to enable wireframe mode for the polygon
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); //wireframe mode
	}
	if (in->IsKeyPressed(GLFW_KEY_5))
	{
		glClearColor(0,0,0,0);
	}
	if (in->IsKeyPressed(GLFW_KEY_P))
	{
		projType = !projType;
	}
}
