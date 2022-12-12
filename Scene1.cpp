#include "Scene1.h"
#include "GL/glew.h"
#include "GameObject.h"
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Mtx44.h"
#include "GLFW/glfw3.h"

#define time_scale 5

void Bounce(Vector3& velocity, const Vector3& direction)
{
	velocity.x += (velocity.x * direction.x)*2;
	velocity.y += (velocity.y * direction.y)*2;
}

void Scene1::BorderCollision(GameObject& a)
{
	if (a.pos.x >= m_worldWidth || a.pos.x <= 0)
		Bounce(a.vel,{-1,0,0});
	else if (a.pos.y >= m_worldHeight || a.pos.y <= 0)
		Bounce(a.vel,{0,-1,0});
}

Scene1::Scene1()
{
	player = NULL;
}

Scene1::~Scene1()
{
}

void Scene1::Init()
{
	//Calculating aspect ratio
	m_worldHeight = 100.f;
	m_worldWidth = m_worldHeight * (float)Application::GetWindowWidth() / Application::GetWindowHeight();

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

	camera.Init(Vector3(0, 0, 1), Vector3(0, 0, 0), Vector3(0, 1, 0));

	// Init VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		meshList[i] = nullptr;
	}

	meshList[GEO_AXES] = MeshBuilder::GenerateAxes("Axes", 10000.f, 10000.f, 10000.f);
	meshList[GEO_BALL] = MeshBuilder::GenerateSphere("Sphere", Color(1.0f, 1.0f, 1.0f), 10, 10, 1.f);
	player = new GameObject(meshList[GEO_BALL]);
	player->pos = {m_worldWidth/2.f,m_worldWidth/2.f,0};
}

void Scene1::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress();

	//Calculate all the forces acting on this frame

	//Calculate the resulting acceleration
	// F = ma
	multiplier = 1.0f / player->mass;
	acc = force * multiplier;
	temp = player->vel;

	//commpute the resulting velocity.
	// v = u + at
	player->vel += (float)dt * time_scale * acc;

	// s = 1/2 (u+v)t
	player->pos += 0.5f * (float)dt * time_scale * (temp + player->vel);
	
	// need all the forces to reset
	force.SetZero();

	BorderCollision(*player);
}

void Scene1::Render()
{
	// Clear color buffer every frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Projection matrix : Orthographic Projection
	Mtx44 projection;
	projection.SetToOrtho(0, m_worldWidth, 0, m_worldHeight, -10, 10);
	projectionStack.LoadMatrix(projection);

	// Camera matrix
	viewStack.LoadIdentity();
	viewStack.LookAt(
		camera.position.x, camera.position.y, camera.position.z,
		camera.target.x, camera.target.y, camera.target.z,
		camera.up.x, camera.up.y, camera.up.z
	);
	// Model matrix : an identity matrix (model will be at the origin)
	modelStack.LoadIdentity();

	RenderMesh(meshList[GEO_AXES], false);

	// Render objects
	modelStack.PushMatrix();
	modelStack.Translate(player->pos.x, player->pos.y, player->pos.z);
	modelStack.Scale(player->scale.x, player->scale.y, player->scale.z);
	//meshList[GEO_BALL]->material.kAmbient.Set(go->color.x, go->color.y, go->color.z);
	RenderMesh(meshList[GEO_BALL], false);
	modelStack.PopMatrix();
}

void Scene1::RenderMesh(Mesh* mesh, bool enableLight)
{
	Mtx44 MVP;

	MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP], 1, GL_FALSE, &MVP.a[0]);
	mesh->Render();
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
	if (Application::IsKeyPressed(0x31))
	{
		// Key press to enable culling
		glEnable(GL_CULL_FACE);
	}
	if (Application::IsKeyPressed(0x32))
	{
		// Key press to disable culling
		glDisable(GL_CULL_FACE);
	}
	if (Application::IsKeyPressed(0x33))
	{
		// Key press to enable fill mode for the polygon
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); //default fill mode
	}
	if (Application::IsKeyPressed(0x34))
	{
		// Key press to enable wireframe mode for the polygon
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); //wireframe mode
	}

	// Up button
	force.x = Application::IsKeyPressed(GLFW_KEY_RIGHT) - Application::IsKeyPressed(GLFW_KEY_LEFT);
	force.y = Application::IsKeyPressed(GLFW_KEY_UP) - Application::IsKeyPressed(GLFW_KEY_DOWN);

}
