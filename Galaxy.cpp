#include "Galaxy.hpp"
#include "GL/glew.h"

#include "ext/matrix_clip_space.hpp"
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Input.hpp"

Galaxy::Galaxy()
{
}

Galaxy::~Galaxy()
{
}

void Galaxy::Init()
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

	glm::mat4 projection = glm::perspective(45.0f,4.f/3.f,0.1f,1000.f);
	projectionStack.LoadMatrix(projection);

	// Init VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		meshList[i] = nullptr;
	}

	meshList[GEO_AXES] = MeshBuilder::GenerateAxes("Axes", 10000.f, 10000.f, 10000.f);
	meshList[GEO_SUN] = MeshBuilder::GenerateSphere("SUN",{0.9f,0.3f,0.f},4,32,32);
	meshList[GEO_EARTH] = MeshBuilder::GenerateSphere("EARTH",{0.4f,0.2f,0.8f},1,32,32);
	meshList[GEO_MOON] = MeshBuilder::GenerateSphere("MOON",{0.5f,0.5f,0.5f},0.2f,32,32);
	meshList[GEO_CYLINDER] = MeshBuilder::GenerateCylinder("CYL",{1,1,1},32,1,1);
}

void Galaxy::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress();

	camera.update(dt);
	earthRot += dt*10;
	moonRot += dt*20;
}

void Galaxy::Render()
{
	// Clear color buffer every frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	viewStack.LoadIdentity();
	viewStack.LookAt(camera.position.x,camera.position.y,camera.position.z,
			camera.target.x,camera.target.y,camera.target.z,
			camera.up.x,camera.up.y,camera.up.z);

	modelStack.LoadIdentity();


	// Setup Model View Projection matrix
	glm::mat4 MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	meshList[GEO_AXES]->Render();

	meshList[GEO_SUN]->Render();
	MatrixStack earth;
	earth.LoadIdentity();
	earth.PushMatrix();
	earth.Rotate(earthRot,0,1,0);
	earth.Translate(10,0,0);
	earth.Rotate(earthRot,0,1,0);
	MVP = projectionStack.Top() * viewStack.Top() * earth.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	meshList[GEO_EARTH]->Render();
	
	earth.PushMatrix();
	earth.Translate(2,0,0);
	earth.Rotate(moonRot,0,1,0);
	MVP = projectionStack.Top() * viewStack.Top() * earth.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	meshList[GEO_MOON]->Render();
	earth.PopMatrix();
	earth.PopMatrix();
	// Render objects

}

void Galaxy::Exit()
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

void Galaxy::HandleKeyPress() 
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
