#include "Scene1.h"
#include "GL/glew.h"
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Mtx44.h"
#include "LoadTGA.h"
#include "GLFW/glfw3.h"

using namespace std;

#define TIME_SCALE 1.f
const int MAX_SPEED = 10;
const float ROTATION_SPEED = 3.f;

static Vector3 RotateVector(const Vector3& vec, float radian)
{
	return Vector3(vec.x * cos(radian) + vec.y * -sin(radian), 
					vec.x * sin(radian) + vec.y * cos(radian), 0.f);
}

Scene1::Scene1()
{
	m_obj = nullptr;
}

Scene1::~Scene1()
{
}

void Scene1::Init()
{
	//Calculating aspect ratio
	m_worldHeight = 500.f;
	m_worldWidth = m_worldHeight * (float)Application::GetWindowWidth() / Application::GetWindowHeight();

	// Black background
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	// Enable depth test
	glEnable(GL_DEPTH_TEST);
	// Accept fragment if it closer to the camera than the former one
	glDepthFunc(GL_LESS);

	glEnable(GL_CULL_FACE);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glGenVertexArrays(1, &m_vertexArrayID);
	glBindVertexArray(m_vertexArrayID);

	m_programID = LoadShaders("Shader//comg.vertexshader", "Shader//comg.fragmentshader");

	// Get a handle for our uniform
	m_parameters[U_MVP] = glGetUniformLocation(m_programID, "MVP");
	// Get a handle for our "colorTexture" uniform
	m_parameters[U_COLOR_TEXTURE_ENABLED] = glGetUniformLocation(m_programID, "colorTextureEnabled");
	m_parameters[U_COLOR_TEXTURE] = glGetUniformLocation(m_programID, "colorTexture");
	// Get a handle for our "textColor" uniform
	m_parameters[U_TEXT_ENABLED] = glGetUniformLocation(m_programID, "textEnabled");
	m_parameters[U_TEXT_COLOR] = glGetUniformLocation(m_programID, "textColor");

	// Use our shader
	glUseProgram(m_programID);

	camera.Init(Vector3(0, 0, 1), Vector3(0, 0, 0), Vector3(0, 1, 0));

	// Init VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		meshList[i] = nullptr;
	}

	meshList[GEO_AXES] = MeshBuilder::GenerateAxes("Axes", 10000.f, 10000.f, 10000.f);
	meshList[GEO_SHIP] = MeshBuilder::GenerateQuad("ship", Color(1, 1, 1), 10.f);
	m_obj = new GameObject(GameObject::GO_BALL);

	m_obj->pos = Vector3(m_worldWidth / 2.0f, m_worldHeight / 2.0f, 0.f);
	m_obj->scale = Vector3(2.f, 2.f, 1.f);
	m_obj->vel = Vector3(0.f, 0.f, 0.f);
	m_obj->active = true;
	m_obj->mass = 1;

    m_obj->direction = {0.f,1.f,0.f};
    m_obj->angularVelocity = 0;
    m_obj->momentInertia = m_obj->mass * m_obj->scale.x * m_obj->scale.x;

    torque = {0,0,0};
}

void Scene1::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress();

    acceleration = force / m_obj->mass;
    Vector3 temp = m_obj->vel;

    m_obj->vel = acceleration * static_cast<float>(dt) * TIME_SCALE;
    if (m_obj->vel.LengthSquared() > (MAX_SPEED * MAX_SPEED))
        m_obj->vel.Normalize() *= MAX_SPEED;
    m_obj->pos += 0.5f* static_cast<float>(dt) * TIME_SCALE * (temp + m_obj->vel);

    float AngularAcceleration = torque.z / m_obj->momentInertia;
    m_obj->angularVelocity += AngularAcceleration * static_cast<float>(dt);
    m_obj->angularVelocity = Math::Clamp(m_obj->angularVelocity,-ROTATION_SPEED,ROTATION_SPEED);
    m_obj->direction = RotateVector(m_obj->direction,m_obj->angularVelocity * static_cast<float>(dt));

    force.SetZero();
    torque.SetZero();
}

void Scene1::Render()
{
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
	modelStack.Translate(m_obj->pos.x, m_obj->pos.y, m_obj->pos.z);
    modelStack.Rotate(Math::RadianToDegree(atan2(m_obj->direction.y,m_obj->direction.x)),0,0,1);
	modelStack.Scale(m_obj->scale.x, m_obj->scale.y, m_obj->scale.z);
	RenderMesh(meshList[GEO_SHIP], false);
	modelStack.PopMatrix();
}

void Scene1::RenderMesh(Mesh* mesh, bool enableLight)
{
	Mtx44 MVP, modelView, modelView_inverse_transpose;
	
	MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP], 1, GL_FALSE, &MVP.a[0]);
	if(mesh->textureID > 0)
	{
		glUniform1i(m_parameters[U_COLOR_TEXTURE_ENABLED], 1);
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_2D, mesh->textureID);
		glUniform1i(m_parameters[U_COLOR_TEXTURE], 0);
	}
	else
	{
		glUniform1i(m_parameters[U_COLOR_TEXTURE_ENABLED], 0);
	}
	mesh->Render();
	if(mesh->textureID > 0)
	{
		glBindTexture(GL_TEXTURE_2D, 0);
	}
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

#define thrust 100.f

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
    if (Application::IsKeyPressed(GLFW_KEY_W))
        force += m_obj->direction * thrust * TIME_SCALE;
    if (Application::IsKeyPressed(GLFW_KEY_S))
        force -= m_obj->direction * thrust * TIME_SCALE;
    if (Application::IsKeyPressed(GLFW_KEY_A))
    {
        force += m_obj->direction;
        torque += Vector3{-m_obj->scale.x, -m_obj->scale.y,0}.Cross({1,0,0});
    }
    if (Application::IsKeyPressed(GLFW_KEY_D))
    {
        force -= m_obj->direction;
        torque += Vector3{-m_obj->scale.x, m_obj->scale.y,0}.Cross({1,0,0});
    }
}

void Scene1::BounceOff(const GameObject* go1, const GameObject* go2)
{

    auto distance = go2->pos - go1->pos;
    auto distancelength = distance.Length();
    Vector3 unitnormal = distance * (1/distancelength);
    Vector3 unittangent = {-unitnormal.y, unitnormal.x,0.f};
    auto vn1 = unitnormal.Dot(go1->vel);
    auto vn2 = unitnormal.Dot(go2->vel);
    auto vt1 = unittangent.Dot(go1->vel);
    auto vt2 = unittangent.Dot(go2->vel);
    auto vt1prime = vt1;
    auto vt2prime = vt2;
    auto vn1prime = (vn1 *(go1->mass - go2->mass) + (2 * go2->mass * vn2));// / go1->mass + go2->mass);
    auto vn2prime = (vn2 *(go2->mass - go1->mass) + (2 * go1->mass * vn1));// / go1->mass + go2->mass);
    auto vn1primev = vn1prime * unitnormal;
    auto vn2primev = vn2prime * unitnormal;
    auto vt1primev = vt1prime * unittangent;
    auto vt2primev = vt2prime * unittangent;
    go1->vel = vn1primev + vt1primev;
    go2->vel = vn2primev + vt2primev;
}

