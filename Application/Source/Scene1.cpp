#include "Scene1.h"

#include <ext/scalar_constants.hpp>
#include <gtc/constants.hpp>

#include "glm.hpp"
#include "GL/glew.h"
#include "Application.h"
#include "shader.hpp"
#include "MeshBuilder.h"
#include "LoadTGA.h"
#include "physics.h"

using namespace std;

#define time_scale 5
#define thrust 25
#define x_resistant 1
const int MAX_SPEED = 10; 
const float ROTATION_SPEED = 3.f;
const float GRAVITY_CONSTANT = 3.f;//10.f;
const float wallLength = 100.f;
const float angle = Math::QUARTER_PI;
const float radius = wallLength * 0.5f / tan(angle * 0.5f);


Scene1::Scene1()
{
}

Scene1::~Scene1()
{
	for (auto& character : characters)
		delete character;
	for (auto& object : physicsObjects)
		delete object;
	for (auto& sphere : sphericalObjects)
		delete sphere;
	for (auto& wall : walls)
		delete wall;
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
	meshList[GEO_SHIP] = MeshBuilder::GenerateSphere("Sphere", Color(1.0f, 1.0f, 1.0f), 10, 10, 1.f);
	meshList[PROJECTILE] = MeshBuilder::GenerateSphere("PROJECTILE",{1,1,1},8,8,1.f);
	meshList[SLINGSHOT] = MeshBuilder::GenerateQuad("SLINGSHOT",{1,1,1});
	meshList[SLINGSHOT]->textureID = LoadTGA("Assets/slingshot.tga");
	meshList[TERRENCE] = MeshBuilder::GenerateQuad("TERRENCE",{1,1,1});
	meshList[TERRENCE]->textureID = LoadTGA("Assets/Terrence.tga");
	meshList[BACKGROUND] = MeshBuilder::GenerateQuad("BACKGROUND",{1,1,1});
	meshList[BACKGROUND]->textureID = LoadTGA("Assets/abg.tga");
	meshList[CUBE] = MeshBuilder::GenerateQuad("CUBE",{0,0,1});
	
	// note that the wall is a cube that will be scaled accordingly
	meshList[GEO_WALL] = MeshBuilder::GenerateCube("wall", Color(1, 0, 0), 1.f);

	Slingshot = new GameObject(meshList[SLINGSHOT]);
	Slingshot->pos = {20,20*2.5,0};
	Slingshot->scale = {40,40*2.5,1};

	terrence = new GameObject(meshList[TERRENCE]);
	terrence->pos = Slingshot->pos;
	terrence->pos.z = 5;
	terrence->pos.y += 20;
	terrence->scale = {50,50,50};
	terrence->mass = 5.f;
	terrence->Recalculate();

	GameObject* background = new GameObject(meshList[BACKGROUND]);
	background->pos = {400,150,-5};
	background->scale = {800,700,1};
	
	characters.push_back(background);
	characters.push_back(Slingshot);
	characters.push_back(terrence);

	for (int i = 0; i < 8; ++i)
	{
		GameObject* object = new GameObject(meshList[CUBE]);
		object->pos = {static_cast<float>(300),static_cast<float>(20+(i*20)),0};
		object->scale = {20,20,20};
		object->Recalculate();
		physicsObjects.push_back(object);
	}
	for (int i = 0; i < 10; ++i)
	{
		GameObject* object = new GameObject(meshList[PROJECTILE]);
		object->pos = {static_cast<float>(200+(i*30)),300,0};
		object->scale = {10,10,10};
		object->Recalculate();
		sphericalObjects.push_back(object);
	}

	// Bottom
	GameObject* wall = new GameObject(meshList[GEO_WALL]);
	wall->pos = {400,-10,-4};
	wall->scale = {1.f,800,1};
	wall->angle = glm::half_pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	// Left
	wall = new GameObject(meshList[GEO_WALL]);
	wall->scale = {1.f,600,1};
	wall->pos = {0,300,0};
	wall->angle = glm::pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	// Right
	wall = new GameObject(meshList[GEO_WALL]);
	wall->scale = {1.f,600,1};
	wall->pos = {680,300,0};
	wall->angle = glm::pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	// Top
	wall = new GameObject(meshList[GEO_WALL]);
	wall->scale = {1.f,800,1};
	wall->pos = {400,520,0};
	wall->angle = glm::half_pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	
}

bool BorderCheck(GameObject& object)
{
	bool a = object.pos.x > 800;
	bool b = object.pos.x < 0;
	bool c = object.pos.y > 600;
	bool d = object.pos.y < 0;
	return a || b || c || d;
}

void Scene1::Update(double dt)
{
	deltaTime = dt;
	// Check for key press, you can add more for interaction
	HandleKeyPress();

	terrence->pos.z = 5;
	if (terrenceGravity)
	{
		terrence->ApplyCWForce(dt,80);
		LaunchObject(*terrence,{0,-50 * terrence->mass,0});
		timeSinceLaunch += dt;
	}

	for (const auto& object : physicsObjects)
	{
		LaunchObject(*object,{0,-125,0});
		for (const auto& objecttwo : physicsObjects)
		{
			if (object == objecttwo) continue;
			bool result = CubeToCube(*object,*objecttwo);
			if (result)
			{
				object->isColliding = true;
				objecttwo->isColliding = true;
				ElasticCollisionResponse(*object,*objecttwo);
			}
		}
		for (const auto& objecttwo : sphericalObjects)
		{
			bool result = SphereToCube(*objecttwo,*object);
			if (result)
			{
				object->isColliding = true;
				objecttwo->isColliding = true;
				ElasticCollisionResponse(*object,*objecttwo);
			}
		}
		for (const auto& wall : walls)
		{
			if (CheckLineCollision(object,wall))
				WallCollisionResponse(object,wall);
		}
		bool result = SphereToCube(*terrence,*object);
		if (result)
		{
			object->isColliding = true;
			terrence->isColliding = true;
			ElasticCollisionResponse(*terrence,*object);
		}
	}
	for (const auto& object : sphericalObjects)
	{
		for (const auto& objecttwo : sphericalObjects)
		{
			bool result = SphereToSphere(*object,*objecttwo);
			if (object == objecttwo) continue;
			if (result)
			{
				object->isColliding = true;
				objecttwo->isColliding = true;
				ElasticCollisionResponse(*object,*objecttwo);
			}
		}
		for (const auto& wall : walls)
		{
			if (CheckLineCollision(object,wall))
				WallCollisionResponse(object,wall);
		}
		bool result = SphereToSphere(*terrence,*object);
		if (result)
		{
			object->isColliding = true;
			terrence->isColliding = true;
			ElasticCollisionResponse(*terrence,*object);
		}
	}
	for (const auto& wall : walls)
	{
		if (CheckLineCollision(terrence,wall))
			WallCollisionResponse(terrence,wall);
	}
	
	if (timeSinceLaunch >= 8)
	{
		terrenceGravity = false;
		terrence->pos = terrenceSpawn;
		terrence->vel = {0,0,0};
		terrence->oldVel = {};
		terrence->angle = 0;
		terrence->dir = {};
		timeSinceLaunch = 0;
	}

	for (const auto& object : sphericalObjects)
		object->Displace(dt);
	for (const auto& object : physicsObjects)
		object->Displace(dt);
	
	terrence->Displace(dt);
}

bool Scene1::CheckLineCollision(GameObject* go1, GameObject* go2)
{
	Vector3 diff = go1->pos - go2->pos;
	Vector3 axisX = go2->normal;
	Vector3 axisY = Vector3(-go2->normal.y, go2->normal.x, 0);

	float projectedDist = diff.Dot(axisX);

	if (projectedDist > 0) axisX = -axisX;

	return go1->vel.Dot(axisX) >= 0 && //Check 1: Travelling towards the wall ?
		go2->scale.x * 0.5 + (go1->scale.x * 0.5f) > -diff.Dot(axisX) && //Check 2: Radius + Thickness vs Distance
		go2->scale.y * 0.5 > fabs(diff.Dot(axisY)); //Check 3: Length check
}

void Scene1::WallCollisionResponse(GameObject* go1, GameObject* go2)
{
	go1->vel = go1->vel - (2.0f * go1->vel.Dot(go2->normal)) * go2->normal;
}

void Scene1::LaunchObject(GameObject& object, const Vector3& force)
{
	// a = f/m // 1/mass
	Vector3 acceleration = force * object.multiplier;

	// v = u + at
	object.vel += acceleration * static_cast<float>(deltaTime);
}

void Scene1::reset()
{
	terrenceGravity = false;
	
	for (auto& a : characters)
		delete a;
	for (auto& a : physicsObjects)
		delete a;
	for (auto& a : sphericalObjects)
		delete a;
	for (auto& a : walls)
		delete a;
	
	characters.clear();
	physicsObjects.clear();
	sphericalObjects.clear();
	walls.clear();
	
	Slingshot = new GameObject(meshList[SLINGSHOT]);
	Slingshot->pos = {20,20*2.5,0};
	Slingshot->scale = {40,40*2.5,1};

	terrence = new GameObject(meshList[TERRENCE]);
	terrence->pos = Slingshot->pos;
	terrence->pos.z = 5;
	terrence->pos.y += 20;
	terrence->scale = {50,50,50};
	terrence->mass = 3.f;
	terrence->Recalculate();

	GameObject* background = new GameObject(meshList[BACKGROUND]);
	background->pos = {400,150,-5};
	background->scale = {800,700,1};
	
	characters.push_back(background);
	characters.push_back(Slingshot);
	characters.push_back(terrence);

	for (int i = 0; i < 8; ++i)
	{
		GameObject* object = new GameObject(meshList[CUBE]);
		object->pos = {static_cast<float>(300),static_cast<float>(20+(i*20)),0};
		object->scale = {20,20,20};
		object->Recalculate();
		physicsObjects.push_back(object);
	}
	for (int i = 0; i < 10; ++i)
	{
		GameObject* object = new GameObject(meshList[PROJECTILE]);
		object->pos = {static_cast<float>(200+(i*30)),300,0};
		object->scale = {10,10,10};
		object->Recalculate();
		sphericalObjects.push_back(object);
	}

	// Bottom
	GameObject* wall = new GameObject(meshList[GEO_WALL]);
	wall->pos = {400,-10,-4};
	wall->scale = {1.f,800,1};
	wall->angle = glm::half_pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	// Left
	wall = new GameObject(meshList[GEO_WALL]);
	wall->scale = {1.f,600,1};
	wall->pos = {0,300,0};
	wall->angle = glm::pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	// Right
	wall = new GameObject(meshList[GEO_WALL]);
	wall->scale = {1.f,600,1};
	wall->pos = {680,300,0};
	wall->angle = glm::pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
	// Top
	wall = new GameObject(meshList[GEO_WALL]);
	wall->scale = {1.f,800,1};
	wall->pos = {400,520,0};
	wall->angle = glm::half_pi<float>();
	wall->dir = {glm::cos(wall->angle),glm::sin(wall->angle),0.f};
	wall->normal = {glm::sin(angle),glm::cos(angle),0};
	wall->Displace(deltaTime);
	walls.push_back(wall);
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

	for (const auto& character : characters)
	{
		modelStack.PushMatrix();
		modelStack.Translate(character->pos.x,character->pos.y,character->pos.z);
		modelStack.Rotate(glm::degrees(character->angle),0,0,1);
		//modelStack.Rotate(glm::degrees(character->angle),0,0,1);
		modelStack.Scale(character->scale.x,character->scale.y,character->scale.z);
		RenderMesh(character->mesh,false);
		modelStack.PopMatrix();
	}

	for (const auto& object : physicsObjects)
	{
		modelStack.PushMatrix();
		modelStack.Translate(object->pos.x,object->pos.y,object->pos.z);
		modelStack.Rotate(glm::degrees(object->angle),0,0,1);
		modelStack.Scale(object->scale.x,object->scale.y,object->scale.z);
		RenderMesh(object->mesh,false);
		modelStack.PopMatrix();
	}

	for (const auto& object : sphericalObjects)
	{
		modelStack.PushMatrix();
		modelStack.Translate(object->pos.x,object->pos.y,object->pos.z);
		modelStack.Rotate(glm::degrees(object->angle),0,0,1);
		modelStack.Scale(object->scale.x,object->scale.y,object->scale.z);
		RenderMesh(object->mesh,false);
		modelStack.PopMatrix();
	}

	for (const auto& wall : walls)
	{
		modelStack.PushMatrix();
		modelStack.Translate(wall->pos.x,wall->pos.y,wall->pos.z);
		modelStack.Rotate(glm::degrees(wall->angle),0,0,1);
		modelStack.Scale(wall->scale.x,wall->scale.y,wall->scale.z);
		RenderMesh(wall->mesh,false);
		modelStack.PopMatrix();
	}

	/*
	for (const auto& projectile : projectiles)
	{
		modelStack.PushMatrix();
		modelStack.Translate(projectile.pos.x,projectile.pos.y,projectile.pos.z);
		modelStack.Scale(projectile.scale.x,projectile.scale.y,projectile.scale.z);
		RenderMesh(projectile.mesh,false);
		modelStack.PopMatrix();
	}
	for (const auto& target : targets)
	{
		modelStack.PushMatrix();
		modelStack.Translate(target.pos.x,target.pos.y,target.pos.z);
		modelStack.Scale(target.scale.x,target.scale.y,target.scale.z);
		RenderMesh(target.mesh,false);
		modelStack.PopMatrix();
	}*/
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

void Scene1::HandleKeyPress()
{
	static bool leftButtonState = false;
	double x, y, ww, wh;
	Application::GetCursorPos(&x, &y);
	wh = Application::GetWindowHeight();
	ww = Application::GetWindowWidth();
	Vector3 mousePos((float)x * (m_worldWidth / (float)ww), ((float)wh - (float) y) * (m_worldHeight / (float)wh), 0);

	if (Application::IsMousePressed(0))
	{
		if (!terrenceGravity)
		{
			leftButtonState = true;
			toss = mousePos - terrenceSpawn;
		}
	}
	else if (leftButtonState && !Application::IsMousePressed(0))
	{
		leftButtonState = false;
		LaunchObject(*terrence,toss*80);
		terrenceGravity = true;
	}
	
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

	if (Application::IsKeyPressed(VK_SPACE))
		reset();
	if (Application::IsKeyPressed('D'))
		terrence->ApplyCWForce(deltaTime,100);
}
