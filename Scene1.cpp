#include "Scene1.h"
#include "GL/glew.h"

#include "ext/matrix_clip_space.hpp"
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Input.hpp"

Scene1::Scene1()
{
}

Scene1::~Scene1()
{
}

void Scene1::Init()
{
    camera.init(
            {4.f, 3.f, 3.f},
            {0.f, 0.f, 0.f},
            {0.f, 1.f, 0.f}
    );
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

	// init VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		meshList[i] = nullptr;
	}

	meshList[GEO_AXES] = MeshBuilder::GenerateAxes("Axes", 10000.f, 10000.f, 10000.f);
}

void Scene1::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress();

}

void Scene1::Render()
{
	// Clear color buffer every frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glm::mat4 view = glm::lookAt(
		camera.position,
		camera.target,
		camera.up
	);

	glm::mat4 projection = glm::mat4(1.f);
	switch (projType)
	{
		case 0:
			projection = glm::ortho(-10.f,10.f,-10.f,10.f,0.1f,1000.f);
			break;
		default:
			projection = glm::perspective(45.f,4.0f/3.0f,0.1f,1000.f);
	}

	// Setup Model View Projection matrix

	// Render objects

}

void Scene1::Exit()
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

void Scene1::HandleKeyPress() 
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
