#include "Scene1.h"
#include "GL/glew.h"
#include "GameObject.h"
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Mtx44.h"
#include "GLFW/glfw3.h"
#include <memory>

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
}

Scene1::~Scene1()
{
	projectiles.clear();
}

void Scene1::Wave()
{
	if (waves.empty())
	{
	const int waveCount = (rand()%5)+1;
	for (int i = 0; i < waveCount; ++i)
	{
		const WaveType pregen = static_cast<WaveType>(rand()%4);
		if (pregen == CORNERFAN)
		{
			const int burst = rand()%5;
			if (burst <= 0)
			{
				for (int j = 0; j < waveCount-i; ++j)
				{
					waves.push(CORNERFAN);
				}
			}
			break;
		}
		if (pregen == CENTER)
		{
			const int burst = rand()%5;
			if (burst <= 0)
			{
				for (int j = 0; j < waveCount-i; j++)
				{
					waves.push(CENTER);
				}
			}
			break;
		}
		waves.push(pregen);
	}
	}
	if (waveTime < waveFrequency) return;
	switch (waves.front())
	{
		case GRID:
		{
			std::cout << "GRID" << std::endl;
		const float scale = static_cast<float>((rand()%2)+1);
		const int wDispersion = m_worldWidth / 10;
		const int hDispersion = m_worldHeight / 10;
		for (int i = 0; i < 10; ++i)
		{
			radial newBound;
			newBound.position = {static_cast<float>(i*wDispersion),m_worldHeight,0};
			newBound.radius = scale;
			
			std::unique_ptr<timedRBounded> newBullet = std::make_unique<timedRBounded>(meshList[GEO_BALL],newBound,3);
			newBullet->pos = newBound.position;
			newBullet->scale = {scale,scale,scale};
			newBullet->ActOn(300-(scale*20),180);
			newBullet->mass = 1.f;
			newBullet->multiplier = 1/newBullet->mass;
			newBullet->timeSinceAlive = 0;
			projectiles.push_back(std::move(newBullet));
			
			std::unique_ptr<timedRBounded> newBullet2 = std::make_unique<timedRBounded>(meshList[GEO_BALL],newBound,3);
			newBound.position = {0,static_cast<float>(i*hDispersion),0};
			newBullet2->pos = newBound.position;
			newBullet2->scale = {scale,scale,scale};
			newBullet2->ActOn(300-(20*scale),90);
			newBullet2->mass = 1.f;
			newBullet2->multiplier = 1/newBullet2->mass;
			newBullet2->timeSinceAlive = 0;
			projectiles.push_back(std::move(newBullet2));
		}
		}
		break;
		case CORNERFAN:
		{
			std::cout << "CORNERFAN" << std::endl;
			const int density = (rand()%20) + 10;
			const int corner = rand()%4;
			const int angle = corner * 90;
			const float angleIncrease = 90.f/density;
			Vector3 cornerLocation{};
			switch (corner)
			{
				case 0:
					cornerLocation = {0,0,0};
					break;
				case 1:
					cornerLocation = {0,m_worldHeight,0};
					break;
				case 2:
					cornerLocation = {m_worldWidth,m_worldHeight,0};
					break;
				case 3:
					cornerLocation = {m_worldWidth,0,0};
					break;
			}
			for (int i = 0; i < density; ++i)
			{
				radial bounds;
				bounds.position = cornerLocation;
				bounds.radius = 1;
				std::unique_ptr<timedRBounded> projectile = std::make_unique<timedRBounded>(meshList[GEO_BALL],bounds,5);
				projectile->mass = 1.f;
				projectile->multiplier = 1/projectile->mass;
				projectile->scale = {1,1,1};
				projectile->pos = bounds.position;
				projectile->ActOn(100,angle + (angleIncrease*i));
				projectiles.push_back(std::move(projectile));
			}
		}
		break;
		case DIRECT:
		{
			std::cout << "DIRECT" << std::endl;
			radial bounds;
			bounds.position = {};
			bounds.radius = 2;
			const int shots = (rand()%9)+3;
			const int dispersion = (rand()%10)+1;
			const float dispersionAngle = 10.f;
			const float lowAngle = -(dispersionAngle * shots/2);
			for (int j = 0; j < dispersion; ++j)
			{
				const float shootAngle = lowAngle + (j*dispersionAngle);
			for (int i = 0; i < shots; ++i)
			{
				std::unique_ptr<timedRBounded> proj = std::make_unique<timedRBounded>(meshList[GEO_BALL],bounds,5);
			proj->mass = 1.f;
			proj->multiplier = 1/proj->mass;
			proj->scale = {2,2,1};
			proj->pos = bounds.position;
			proj->ActOn(100 + (100*i),proj->DirectionTo(player->pos)+shootAngle);
			projectiles.push_back(std::move(proj));
			}
			}
		}
		break;
		case CENTER:
		{
			std::cout << "CENTER" << std::endl;
			const float scale = static_cast<float>((rand()%4)+1);
			Quad bounds;
			bounds.size = {1,1,1};
			for (int i = 0; i < 25; ++i)
			{
			std::unique_ptr<timedQBounded> proj = std::make_unique<timedQBounded>(meshList[GEO_CUBE],bounds,4);
			proj->mass = 1.f;
			proj->multiplier = 1/proj->mass;
			proj->scale = {scale,scale,scale};
			proj->pos = {player->pos.x,m_worldHeight + (i*5),0};
			proj->ActOn(400 - (scale * 20), 180);
			quadProjectiles.push_back(std::move(proj));
			std::unique_ptr<timedQBounded> proj2 = std::make_unique<timedQBounded>(meshList[GEO_CUBE],bounds,4);
			proj2->mass = 1.f;
			proj2->multiplier = 1/proj2->mass;
			proj2->scale = {scale,scale,scale};
			proj2->pos = {0.f - (i*5), player->pos.y,0};
			proj2->ActOn(400 - (scale * 20), 90);
			quadProjectiles.push_back(std::move(proj2));
			}
		}
		break;
	}
	WaveType save = waves.front();
	waves.pop();
	waveTime = 0;
	if (waves.front() == save)
		waveFrequency = 0.4;
	else
		waveFrequency = (rand()%3)+1;
}

void Scene1::Init()
{
	//Calculating aspect ratio
	m_worldHeight = 100.f;
	m_worldWidth = m_worldHeight * (float)Application::GetWindowWidth() / Application::GetWindowHeight();

	// Set background color to dark blue
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

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
	meshList[GEO_CUBE] = MeshBuilder::GenerateCube("COOBE",{1,1,1});
	player = std::make_unique<rBounded>(meshList[GEO_BALL], radial{});
	player->pos = {m_worldWidth/2.f,m_worldWidth/2.f,0};
	player->scale = {1,1,1};
	player->bounds.position = player->pos;
	player->bounds.radius = player->scale.x * 2;
	multiplier = 1.0f / player->mass;
}

void Scene1::Update(double dt)
{
	waveTime += dt;
	Wave();
	// Check for key press, you can add more for interaction
	HandleKeyPress();

	//Calculate all the forces acting on this frame

	//Calculate the resulting acceleration
	// F = ma
	//Apply Reverse Force
	force += -player->vel;
	acc = force * multiplier;
	temp = player->vel;

	//commpute the resulting velocity.
	// v = u + at
	player->vel += (float)dt * time_scale * acc;

	// s = 1/2 (u+v)t
	player->pos += 0.5f * (float)dt * time_scale * (temp + player->vel);
	
	// need all the forces to reset
	force.SetZero();

	player->bounds.position = player->pos;

	BorderCollision(*player);
	for (int i = 0; i < projectiles.size(); ++i)
	{
		auto& proj = projectiles[i];
		proj->timeSinceAlive += dt;
		auto initialVelocity = proj->vel;
		proj->vel += static_cast<float>(dt) * time_scale * (proj->force * proj->multiplier);
		proj->pos += 0.5f * static_cast<float>(dt) * time_scale * (initialVelocity + proj->vel);
		proj->force.SetZero();
		proj->bounds.position = proj->pos;
		if (radius(proj->bounds,player->bounds))
		{
			std::cout << "HIT" << std::endl;
			projectiles.erase(projectiles.begin() + i);
			--playerLives;
			if (playerLives <= 0)
			{
				ResetGame();
				break;
			}
			continue;
		}
		if (proj->timeSinceAlive >= proj->lifetime)
		{
			projectiles.erase(projectiles.begin() + i);
		}
	}
	for (int i = 0; i < quadProjectiles.size(); ++i)
	{
		auto& p = quadProjectiles[i];
		p->timeSinceAlive += dt;
		auto initialVelocity = p->vel;
		p->vel += static_cast<float>(dt) * time_scale * (p->force * p->multiplier);
		p->pos += 0.5f * static_cast<float>(dt) * time_scale * (initialVelocity + p->vel);
		p->force.SetZero();
		p->bounds.position = p->pos;
		if (squareradius(p->bounds,player->bounds))
		{
			std::cout << "HIT" << std::endl;
			quadProjectiles.erase(quadProjectiles.begin() + i);
			--playerLives;
			if (playerLives <= 0)
			{ResetGame(); break;}
			continue;
		}
		if (p->timeSinceAlive >= p->lifetime)
			quadProjectiles.erase(quadProjectiles.begin() + i);
	}
}

void Scene1::ResetGame()
{
	projectiles.clear();
	quadProjectiles.clear();
	player->pos = {m_worldWidth/2.f,m_worldHeight/2.f,0};
	player->vel = {};
	player->force = {};
	waveTime = 0;
	for (int i = 0; i < waves.size(); ++i)
		waves.pop();
	playerLives = 5;
	std::cout << "LOSE" << std::endl;
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

	for (const auto& proj : projectiles)
	{
	modelStack.PushMatrix();
		modelStack.Translate(proj->pos.x,proj->pos.y,0);
		modelStack.Scale(proj->scale.x,proj->scale.y,proj->scale.z);
		RenderMesh(proj->mesh,false);
	modelStack.PopMatrix();
	}
	for (const auto& proj : quadProjectiles)
	{
		modelStack.PushMatrix();
		modelStack.Translate(proj->pos.x,proj->pos.y,0);
		modelStack.Scale(proj->scale.x,proj->scale.y,proj->scale.z);
		RenderMesh(proj->mesh,false);
		modelStack.PopMatrix();
	}
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
	force *= 5;

	if (Application::IsKeyPressed(GLFW_KEY_TAB))
		std::cout << projectiles.size() << std::endl;

}
