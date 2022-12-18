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
#ifdef _WIN32
#define PLATFORMDEPENDENTSPEEDBOOST 1
#elif __linux__
#define PLATFORMDEPENDENTSPEEDBOOST 1
#endif

void Bounce(Vector3& velocity, const Vector3& direction)
{
	velocity.x = (velocity.x * direction.x);
	velocity.y = (velocity.y * direction.y);
}

void Scene1::BorderCollision(GameObject& a)
{
	if (a.pos.x + a.scale.x >= m_worldWidth || a.pos.x - a.scale.x <= 0)
		Bounce(a.vel,{-1,1,0});
	if (a.pos.y + a.scale.y >= m_worldHeight || a.pos.y - a.scale.y <= 0)
		Bounce(a.vel,{1,-1,0});
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
	const int waveCount = (rand()%6)+1;
	for (int i = 0; i < waveCount; ++i)
	{
		const WaveType pregen = static_cast<WaveType>(rand()%WAVE_MAX);
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
			continue;
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
			continue;
		}
		waves.push(pregen);
	}
	}
	if (waveTime < waveFrequency) return;
	if (waves.empty()) return;
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
			
			std::unique_ptr<timedBoundedObject<radial>> newBullet = std::make_unique<timedBoundedObject<radial>>(meshList[GEO_BALL],newBound,3);
			newBullet->pos = newBound.position;
			newBullet->scale = {scale,scale,scale};
			newBullet->ActOn(300-(scale*20),Math::DegreeToRadian(180));
			newBullet->mass = 1.f;
			newBullet->multiplier = 1/newBullet->mass;
			newBullet->timeSinceAlive = 0;
			projectiles.push_back(std::move(newBullet));
			
			std::unique_ptr<timedBoundedObject<radial>> newBullet2 = std::make_unique<timedBoundedObject<radial>>(meshList[GEO_BALL],newBound,3);
			newBound.position = {0,static_cast<float>(i*hDispersion),0};
			newBullet2->pos = newBound.position;
			newBullet2->scale = {scale,scale,scale};
			newBullet2->ActOn(300-(20*scale),Math::DegreeToRadian(90));
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
				std::unique_ptr<timedBoundedObject<radial>> projectile = std::make_unique<timedBoundedObject<radial>>(meshList[GEO_BALL],bounds,5);
				projectile->mass = 1.f;
				projectile->multiplier = 1/projectile->mass;
				projectile->scale = {1,1,1};
				projectile->pos = bounds.position;
				projectile->ActOn(100,Math::DegreeToRadian(angle + (angleIncrease*i)));
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
			for (int i = 0; i < shots; ++i)
			{
				std::unique_ptr<timedBoundedObject<radial>> proj = std::make_unique<timedBoundedObject<radial>>(meshList[GEO_BALL],bounds,5);
			proj->mass = 1.f;
			proj->multiplier = 1/proj->mass;
			proj->scale = {2,2,1};
			proj->pos = bounds.position;
			proj->ActOn(100 + (100*i),proj->DirectionTo(player->pos));
			projectiles.push_back(std::move(proj));
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
			std::unique_ptr<timedBoundedObject<Quad>> proj = std::make_unique<timedBoundedObject<Quad>>(meshList[GEO_CUBE],bounds,4);
			proj->mass = 1.f;
			proj->multiplier = 1/proj->mass;
			proj->scale = {scale,scale,scale};
			proj->pos = {player->pos.x,m_worldHeight + (i*5),0};
			proj->ActOn(400 - (scale * 20), Math::DegreeToRadian(180));
			quadProjectiles.push_back(std::move(proj));
			std::unique_ptr<timedBoundedObject<Quad>> proj2 = std::make_unique<timedBoundedObject<Quad>>(meshList[GEO_CUBE],bounds,4);
			proj2->mass = 1.f;
			proj2->multiplier = 1/proj2->mass;
			proj2->scale = {scale,scale,scale};
			proj2->pos = {0.f - (i*5), player->pos.y,0};
			proj2->ActOn(400 - (scale * 20), Math::DegreeToRadian(90));
			quadProjectiles.push_back(std::move(proj2));
			}
		}
		break;
		case LIMITS:
		{
			std::cout << "LIMITS" << std::endl;
			const int corner = rand()%2;
			const int angle = (rand()%11) + 10;
			const int rate = (rand()%3)+1;
			Vector3 cornerVector = {m_worldWidth * corner, m_worldHeight * !corner, 0};
			Line bound;
			bound.start = cornerVector;
			bound.length = 0;
			auto divider = std::make_unique<timedBoundedObject<Line>>(meshList[LINE],bound,2);
			divider->pos = bound.start;
			divider->scale = {bound.length,1,static_cast<float>(rate*3)};
			divider->rotation = Math::RadianToDegree(divider->DirectionTo({m_worldWidth * !corner, m_worldHeight * corner,0})) + angle;
			//std::cout << divider->rotation << std::endl;
			lines.push_back(std::move(divider));
			auto divider2 = std::make_unique<timedBoundedObject<Line>>(meshList[LINE],bound,2);
			divider2->pos = bound.start;
			divider2->scale = {bound.length,1,static_cast<float>(rate*3)};
			divider2->rotation = Math::RadianToDegree(divider2->DirectionTo({m_worldWidth * !corner, m_worldHeight * corner,0})) - angle;
			//std::cout << divider2->rotation << std::endl;
			lines.push_back(std::move(divider2));
			//std::cout << cornerVector << std::endl;
			//std::cout << angle << std::endl;
		}
		break;
		case LASER:
		{
			std::cout << "LASER" << std::endl;
			Line bound;
			bound.start = {m_worldWidth*0.5f,m_worldHeight*0.5f,0};
			bound.length = 0;
			auto laserLine = std::make_unique<timedBoundedObject<Line>>(meshList[LASERLINE],bound,4.f);
			laserLine->pos = bound.start;
			laserLine->scale = {bound.length,1,1};
			laserLine->rotation = Math::RadianToDegree(laserLine->DirectionTo(player->pos));
			damageLines.push_back(std::move(laserLine));
		}
		break;
	}
	WaveType save = waves.front();
	waves.pop();
	waveTime = 0;
	if (!waves.empty())
	{
		if (waves.front() == save)
			waveFrequency = 0.2;
	}
	else
		waveFrequency = 1;
}

#include <chrono>

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
	meshList[PLAYERHURT] = MeshBuilder::GenerateSphere("Sphere", {1,0,0},10,10,1.f);
	meshList[GEO_CUBE] = MeshBuilder::GenerateCube("COOBE",{0,1,0});
	meshList[LINE] = MeshBuilder::GenerateLine("LINE",{1,1,1},1.f);
	meshList[REDLINE] = MeshBuilder::GenerateLine("REDLINE",{1,0,0},1.f);
	meshList[LASERLINE] = MeshBuilder::GenerateLine("LASER",{0,0,1},1.f);
	player = std::make_unique<boundedObject<radial>>(meshList[GEO_BALL], radial{});
	player->pos = {m_worldWidth/2.f,m_worldWidth/2.f,0};
	player->scale = {1,1,1};
	player->bounds.position = player->pos;
	player->bounds.radius = player->scale.x * 2;
	multiplier = 1.0f / player->mass;
	/*
	// LINE DEBUG
	Line bound;
	bound.start = {10,10,0};
	bound.length = 20;
	auto line1 = std::make_unique<boundedObject<Line>>(meshList[LINE],bound);
	line1->pos = bound.start;
	line1->scale = {bound.length,1,1};
	line1->multiplier = 1/line1->mass;
	line1->rotation = 45;
	lines.push_back(std::move(line1));
	bound.start = {20,20,0};
	bound.length = 40;
	auto line2 = std::make_unique<boundedObject<Line>>(meshList[REDLINE],bound);
	line2->pos = bound.start;
	line2->scale = {bound.length,1,1};
	line2->multiplier = 1/line2->mass;
	line2->rotation = 60;
	lines.push_back(std::move(line2));
	// LASER
			Line bound;
			bound.start = {m_worldWidth*0.5f,m_worldHeight*0.5f,0};
			bound.length = 0;
			auto laserLine = std::make_unique<timedBoundedObject<Line>>(meshList[LASERLINE],bound,10.f);
			laserLine->pos = bound.start;
			laserLine->scale = {bound.length,1,2};
			laserLine->rotation = Math::RadianToDegree(laserLine->DirectionTo(player->pos));
			damageLines.push_back(std::move(laserLine));
	// LIMITS
			const int corner = rand()%2;
			const int angle = (rand()%21);
			const int rate = (rand()%4)+1;
			Vector3 cornerVector = {m_worldWidth * corner, m_worldHeight * !corner, 0};
			Line bound;
			bound.start = cornerVector;
			bound.length = 0;
			auto divider = std::make_unique<timedBoundedObject<Line>>(meshList[LINE],bound,3*rate);
			divider->pos = bound.start;
			divider->scale = {bound.length,1,static_cast<float>(rate)};
			divider->rotation = Math::RadianToDegree(divider->DirectionTo({m_worldWidth * !corner, m_worldHeight * corner,0})) + angle;
			//std::cout << divider->rotation << std::endl;
			lines.push_back(std::move(divider));
			auto divider2 = std::make_unique<timedBoundedObject<Line>>(meshList[LINE],bound,3*rate);
			divider2->pos = bound.start;
			divider2->scale = {bound.length,1,static_cast<float>(rate)};
			divider2->rotation = Math::RadianToDegree(divider2->DirectionTo({m_worldWidth * !corner, m_worldHeight * corner,0})) - angle;
			//std::cout << divider2->rotation << std::endl;
			lines.push_back(std::move(divider2));
			//std::cout << cornerVector << std::endl;
			//std::cout << angle << std::endl;
std::cout << "DIRECT" << std::endl;
			radial bounds;
			bounds.position = {0,0,0};
			bounds.radius = 2;
			const int shots = (rand()%9)+3;
			for (int i = 0; i < shots; ++i)
			{
				std::unique_ptr<timedBoundedObject<radial>> proj = std::make_unique<timedBoundedObject<radial>>(meshList[GEO_BALL],bounds,5);
			proj->mass = 1.f;
			proj->multiplier = 1.f/proj->mass;
			proj->scale = {2,2,1};
			proj->pos = bounds.position;
			proj->ActOn(100 + (100*i),proj->DirectionTo(player->pos));
			projectiles.push_back(std::move(proj));
			}
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
				std::unique_ptr<timedBoundedObject<radial>> projectile = std::make_unique<timedBoundedObject<radial>>(meshList[GEO_BALL],bounds,5);
				projectile->mass = 1.f;
				projectile->multiplier = 1/projectile->mass;
				projectile->scale = {1,1,1};
				projectile->pos = bounds.position;
				projectile->ActOn(100,Math::DegreeToRadian(angle + (angleIncrease*i)));
				//std::cout << projectile->force << std::endl;
				projectiles.push_back(std::move(projectile));
			}
	*/
}

void Scene1::Update(double dt)
{
	waveTime += static_cast<float>(dt);
	Wave();
	// Check for key press, you can add more for interaction
	HandleKeyPress();

	player->bounds.position = player->pos;

	if (playerHurtCheck > 0)
	{
		player->mesh = meshList[PLAYERHURT];
		playerHurtCheck -= dt;
	} else player->mesh = meshList[GEO_BALL];
	for (int i = 0; i < projectiles.size(); ++i)
	{
		auto& proj = projectiles[i];
		proj->timeSinceAlive += dt;
		auto initialVelocity = proj->vel;
		auto acceleration = (proj->force * proj->multiplier);
		//std::cout << acceleration << ',' << proj->multiplier << ',' << proj->force << std::endl;
		
		proj->vel += static_cast<float>(dt) * time_scale * PLATFORMDEPENDENTSPEEDBOOST * acceleration;
		proj->pos += 0.5f * static_cast<float>(dt) * time_scale * PLATFORMDEPENDENTSPEEDBOOST * (initialVelocity + proj->vel);
		proj->force.SetZero();
		proj->bounds.position = proj->pos;
		if (radius(proj->bounds,player->bounds))
		{
			projectiles.erase(projectiles.begin() + i);
			if (playerHurtCheck <= 0)
			{
				std::cout << "HITR" << std::endl;
				--playerLives;
				playerHurtCheck = playerHurtTime;
			}
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
		auto acceleration = (p->force * p->multiplier);
		p->vel += static_cast<float>(dt) * time_scale * PLATFORMDEPENDENTSPEEDBOOST * acceleration;
		p->pos += 0.5f * static_cast<float>(dt) * time_scale * PLATFORMDEPENDENTSPEEDBOOST * (initialVelocity + p->vel);
		p->force.SetZero();
		p->bounds.position = p->pos;
		if (squareradius(p->bounds,player->bounds))
		{
			if (playerHurtCheck <= 0)
			{
				std::cout << "HITQ" << std::endl;
				--playerLives;
				playerHurtCheck = playerHurtTime;
			}
			quadProjectiles.erase(quadProjectiles.begin() + i);
			if (playerLives <= 0)
			{ResetGame(); break;}
			continue;
		}
		if (p->timeSinceAlive >= p->lifetime)
			quadProjectiles.erase(quadProjectiles.begin() + i);
	}

	for (int i = 0; i < lines.size(); ++i)
	{
		auto& l = lines[i];
		l->bounds.end = ScalarToVector(l->bounds.length,l->rotation) + l->bounds.start;
		l->bounds.length = l->scale.x;
		if (lineradius(l->bounds,player->bounds))
		{
			std::cout << "BUMPRAY" << std::endl; 
			player->ActOn(120,-player->DirectionTo(player->pos+player->vel));
			l->mesh = meshList[REDLINE];
		} else l->mesh = meshList[LINE];
		if (l->scale.x < 250)
		l->scale.x += l->scale.z;
		l->timeSinceAlive += dt;
		if (l->timeSinceAlive >= l->lifetime)
			lines.erase(lines.begin() + i);
	}

	for (int i = 0; i < damageLines.size(); ++i)
	{
		auto& l = damageLines[i];
		if (l->scale.x < 500)
		l->scale.x += l->scale.z;
		l->bounds.length = l->scale.x;
		l->rotation += 2;
		l->bounds.end = ScalarToVector(l->bounds.length,l->rotation) + l->bounds.start;
		l->timeSinceAlive += dt;
		if (lineradius(l->bounds,player->bounds))
		{
			if (playerHurtCheck <= 0)
			{
				std::cout << "HITRAY" << std::endl;
				--playerLives;
				playerHurtCheck = playerHurtTime;
			}
			if (playerLives <= 0)
			{ResetGame(); break;}
			continue;
		}
		if (l->timeSinceAlive >= l->lifetime)
		{
			damageLines.erase(damageLines.begin()+i);
		}
	}
	//Calculate all the forces acting on this frame

	//Calculate the resulting acceleration
	// F = ma
	//Apply Reverse Force
	player->force -= player->vel;
	BorderCollision(*player);
	acc = player->force * multiplier;
	temp = player->vel;

	//commpute the resulting velocity.
	// v = u + at
	player->vel += (float)dt * time_scale * acc;

	// s = 1/2 (u+v)t
	player->pos += 0.5f * (float)dt * time_scale * (temp + player->vel);
	
	// need all the forces to reset
	player->force.SetZero();
}

void Scene1::ResetGame()
{
	projectiles.clear();
	quadProjectiles.clear();
	lines.clear();
	damageLines.clear();
	player->pos = {m_worldWidth/2.f,m_worldHeight/2.f,0};
	player->vel = {};
	player->force = {};
	waveTime = 0;
	playerHurtCheck = 0;
	for (int i = 0; i < waves.size(); ++i)
		waves.pop();
	playerLives = 5;
	waveFrequency = 5;
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
	RenderMesh(player->mesh, false);
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
	for (const auto& line : lines)
	{
		modelStack.PushMatrix();
		modelStack.Translate(line->pos.x, line->pos.y, 0);
		modelStack.Rotate(line->rotation,0,0,1);
		modelStack.Scale(line->scale.x,line->scale.y,line->scale.z);
		RenderMesh(line->mesh,false);
		modelStack.PopMatrix();
	}
	for (const auto& dmgline : damageLines)
	{
		modelStack.PushMatrix();
		modelStack.Translate(dmgline->pos.x,dmgline->pos.y,0);
		modelStack.Rotate(dmgline->rotation,0,0,1);
		modelStack.Scale(dmgline->scale.x,dmgline->scale.y,dmgline->scale.z);
		RenderMesh(dmgline->mesh,false);
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
	player->force.x = Application::IsKeyPressed(GLFW_KEY_RIGHT) - Application::IsKeyPressed(GLFW_KEY_LEFT);
	player->force.y = Application::IsKeyPressed(GLFW_KEY_UP) - Application::IsKeyPressed(GLFW_KEY_DOWN);
	player->force *= 10;

	/*
	if (Application::IsKeyPressed(GLFW_KEY_TAB))
	{
		std::cout << lines[0]->bounds.start << ' ' << lines[0]->bounds.end << ' '
		<< lines[1]->bounds.start << ' ' << lines[1]->bounds.end << std::endl;
	}
	lines[1]->vel.x = Application::IsKeyPressed(GLFW_KEY_D) - Application::IsKeyPressed(GLFW_KEY_A);
	lines[1]->vel.y = Application::IsKeyPressed(GLFW_KEY_W) - Application::IsKeyPressed(GLFW_KEY_S);
	*/
}
