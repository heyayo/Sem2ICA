#include <ios>
#include <iostream>
#include "ICA.hpp"
#include "GL/glew.h"

#include "ext/matrix_clip_space.hpp"
#include <gtc/matrix_inverse.hpp>
#include "shader.hpp"
#include "Application.h"
#include "MeshBuilder.h"
#include "Input.hpp"
#include <fstream>

#define DT(x) modelStack.Translate(dbt[x].debugTranslate); modelStack.Rotate(debugRotation[x],dbt[x].debugRotationAxis); modelStack.Scale(dbt[x].debugScale);

ICA::ICA()
{
}

ICA::~ICA()
{
}

void ICA::Init()
{
	camera.init(45.f,45.f,15.f);
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
	m_programID = LoadShaders("Shader//Shading.vertexshader",
								"Shader//Shading.fragmentshader");
	glUseProgram(m_programID);

	// Get a handle for our "MVP" uniform
	m_parameters[U_MVP] = glGetUniformLocation(m_programID, "MVP");
	m_parameters[U_MODELVIEW] = glGetUniformLocation(m_programID, "MV");
	m_parameters[U_MODELVIEW_INVERSE_TRANSPOSE] = glGetUniformLocation(m_programID, "MV_inverse_transpose");
	m_parameters[U_MATERIAL_AMBIENT] = glGetUniformLocation(m_programID, "material.kAmbient");
	m_parameters[U_MATERIAL_DIFFUSE] = glGetUniformLocation(m_programID, "material.kDiffuse");
	m_parameters[U_MATERIAL_SPECULAR] = glGetUniformLocation(m_programID, "material.kSpecular");
	m_parameters[U_MATERIAL_SHININESS] = glGetUniformLocation(m_programID,"material.kShininess");
	m_parameters[U_LIGHT0_POSITION] = glGetUniformLocation(m_programID,"lights[0].position_cameraspace");
	m_parameters[U_LIGHT0_COLOR] = glGetUniformLocation(m_programID, "lights[0].color");
	m_parameters[U_LIGHT0_POWER] = glGetUniformLocation(m_programID, "lights[0].power");
	m_parameters[U_LIGHT0_KC] = glGetUniformLocation(m_programID, "lights[0].kC");
	m_parameters[U_LIGHT0_KL] = glGetUniformLocation(m_programID, "lights[0].kL");
	m_parameters[U_LIGHT0_KQ] = glGetUniformLocation(m_programID, "lights[0].kQ");
	m_parameters[U_LIGHTENABLED] = glGetUniformLocation(m_programID, "lightEnabled");

light[0].position = glm::vec3(0, 5, 0);
light[0].color.Set(1, 1, 1);
light[0].power = 1;
light[0].C = 1.f;
light[0].L = 0.01f;
light[0].Q = 0.001f;
  
glUniform3fv(m_parameters[U_LIGHT0_COLOR], 1, &light[0].color.r);
glUniform1f(m_parameters[U_LIGHT0_POWER], light[0].power);
glUniform1f(m_parameters[U_LIGHT0_KC], light[0].C); 
glUniform1f(m_parameters[U_LIGHT0_KL], light[0].L); 
glUniform1f(m_parameters[U_LIGHT0_KQ], light[0].Q); 
  
	glm::mat4 projection = glm::perspective(45.0f,4.f/3.f,0.1f,1000.f);
	projectionStack.LoadMatrix(projection);

	// Init VBO here
	for (int i = 0; i < NUM_GEOMETRY; ++i)
	{
		meshList[i] = nullptr;
	}

	meshList[GEO_AXES] = MeshBuilder::GenerateAxes("Axes", 10000.f, 10000.f, 10000.f);
	meshList[GEO_GROUNDPLANE] = MeshBuilder::GenerateQuad("GROUND", { 1,1,1 }, 100);
	meshList[GEO_SPHERE] = MeshBuilder::GenerateSphere("SUN",{0.1f,0.1f,0.1f},4,32,32);
	meshList[GEO_HALFSPHERE] = MeshBuilder::GenerateHemisphere("HALFSPHERE", { 12 / 255.f,84 / 255.f,32 / 255.f });
	meshList[GEO_CYLINDER] = MeshBuilder::GenerateCylinder("CYL", { 12 / 255.f,84 / 255.f,32 / 255.f },32,1,1);
	meshList[GEO_METALICCYLINDER] = MeshBuilder::GenerateCylinder("CYL", { 0.2f,0.2f,0.2f },32,1,1);
	meshList[GEO_BLACKCYLINDER] = MeshBuilder::GenerateCylinder("CYL", { 0.1f,0.1f,0.1f },32,1,1);
	meshList[GEO_FACESHIELD] = MeshBuilder::GenerateCylinder("FACESHIELD", { 1,210.f / 255.f,61.f / 255.f },32);
    meshList[GEO_CUBE] = MeshBuilder::GenerateCube("CUBE",{12/255.f,84/255.f,32/255.f},2.f);
    meshList[GEO_METALICCUBE] = MeshBuilder::GenerateCube("CUBE", { 0.2f,0.2f,0.2f },2.f);
	meshList[GEO_CONE] = MeshBuilder::GenerateCone("CONE", { 0.1f,0.1f,0.1f }, 32.f);
	meshList[GEO_LIGHT] = MeshBuilder::GenerateSphere("BULB",{1,1,1},1,8,8);
	meshList[GEO_SPHERE]->mat.ambient = {0.1f, 0.1f, 0.1f};
	meshList[GEO_SPHERE]->mat.diffuse = {1.f, 1.0f, 1.0f};
	meshList[GEO_SPHERE]->mat.specular = {0.1f, 0.1f, 0.1f};
	meshList[GEO_SPHERE]->mat.shininess = .2f;
	meshList[GEO_BLACKCYLINDER]->mat.ambient = {0.1f, 0.1f, 0.1f};
	meshList[GEO_BLACKCYLINDER]->mat.diffuse = {1.f, 1.0f, 1.0f};
	meshList[GEO_BLACKCYLINDER]->mat.specular = {0.1f, 0.1f, 0.1f};
	meshList[GEO_BLACKCYLINDER]->mat.shininess = .2f;
	meshList[GEO_CUBE]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_CUBE]->mat.diffuse = { 0.9f, 0.9f, 0.9f };
	meshList[GEO_CUBE]->mat.specular = { .2f, .2f, .2f };
	meshList[GEO_CUBE]->mat.shininess = 1.0f;
	meshList[GEO_CONE]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_CONE]->mat.diffuse = { 1.f, 1.0f, 1.0f };
	meshList[GEO_CONE]->mat.specular = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_CONE]->mat.shininess = .2f;
	meshList[GEO_HALFSPHERE]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_HALFSPHERE]->mat.diffuse = { 0.9f, 0.9f, 0.9f };
	meshList[GEO_HALFSPHERE]->mat.specular = { .2f, .2f, .2f };
	meshList[GEO_HALFSPHERE]->mat.shininess = 1.0f;
	meshList[GEO_CYLINDER]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_CYLINDER]->mat.diffuse = { 0.9f, 0.9f, 0.9f };
	meshList[GEO_CYLINDER]->mat.specular = { .2f, .2f, .2f };
	meshList[GEO_CYLINDER]->mat.shininess = 1.0f;
	meshList[GEO_METALICCYLINDER]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_METALICCYLINDER]->mat.diffuse = { 0.6f, 0.6f, 0.6f };
	meshList[GEO_METALICCYLINDER]->mat.specular = { .8f, .8f, .8f };
	meshList[GEO_METALICCYLINDER]->mat.shininess = 4.0f;
	meshList[GEO_METALICCUBE]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_METALICCUBE]->mat.diffuse = { 0.6f, 0.6f, 0.6f };
	meshList[GEO_METALICCUBE]->mat.specular = { .8f, .8f, .8f };
	meshList[GEO_METALICCUBE]->mat.shininess = 4.0f;
	meshList[GEO_FACESHIELD]->mat.ambient = { 0.1f, 0.1f, 0.1f };
	meshList[GEO_FACESHIELD]->mat.diffuse = { 0.25f, 0.25f, 0.25f };
	meshList[GEO_FACESHIELD]->mat.specular = { 10.f, 10.f, 10.f };
	meshList[GEO_FACESHIELD]->mat.shininess = 10.0f;
	meshList[GEO_GROUNDPLANE]->mat.ambient = { 0.6f, 0.6f, 0.6f };
	meshList[GEO_GROUNDPLANE]->mat.diffuse = { 0.f, 0.f, 0.f };
	meshList[GEO_GROUNDPLANE]->mat.specular = { 10.f, 10.f, 10.f };
	meshList[GEO_GROUNDPLANE]->mat.shininess = 10.0f;

	/*
	for (int i = 0; i < 10; ++i)
	{
		dbt[i].debugTranslate = { 0,0,0 };
		dbt[i].debugRotationAxis = { 1,1,1 };
		dbt[i].debugScale = { 1,1,1 };
		debugRotation[i] = 0;
	}
	*/
}

void ICA::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress(dt);

	camera.update(dt);

	switch (astate)
	{
	case JUMP:
	{
		float sineTemp = glm::sin(jumpSine);
		playerPos.y = sineTemp*5;
		bodyRotate = glm::sin(jumpSine*0.5)*360;
		footRotate = sineTemp * 90;
		kneeBend = sineTemp * 90;
		if (glm::degrees(jumpSine) < 180)
			jumpSine += dt * 2;
		else
		{
			astate = WALK;
			walkCycle = 0;
		}
		glm::vec3 pdelta{ glm::cos(glm::radians(playerRotate)) * 0.1,0,
			-glm::sin(glm::radians(playerRotate)) * 0.1 };
		playerPos -= pdelta;
	}
		break;

	case DANCE:
		handRotate = glm::sin(handWave)*45;
		walk = handRotate;
		rightArmRotate = handRotate;
		leftArmRotate = -handRotate;
		handWave += dt * 3;
		break;
	
	case WALK:
		walk = sin(walkCycle) * 30;
		break;

	case RELOAD:
		if (rightArmRotate < -56 && !reloaded)
			rightArmRotate += 2;
		if (elbowOffset > -30 && !reloaded)
		{
			elbowOffset -= 2;
			elbowDownRotate = elbowOffset;
		}
		else
		{
			reloaded = true;
			elbowDownRotate = elbowOffset + glm::sin(reloadSine) * 5;
			if (reloadSine < glm::radians(360 * 3.f))
				reloadSine += dt * 16;
			else
			{
				if (rightArmRotate > -72 && reloaded)
					rightArmRotate -= 2;
				if (elbowOffset < 0 && reloaded)
					elbowOffset += 2;
				else
					astate = WALK;
			}
		}
	}
}

void ICA::Render()
{
	// Clear color buffer every frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	viewStack.LoadIdentity();
	viewStack.LookAt(camera.position.x,camera.position.y,camera.position.z,
			camera.target.x,camera.target.y,camera.target.z,
			camera.up.x,camera.up.y,camera.up.z);

	modelStack.LoadIdentity();

	glUniform1f(m_parameters[U_LIGHT0_POWER], light[0].power);
	glm::vec3 lightPosition_cameraspace = viewStack.Top() * glm::vec4(light[0].position, 1);
	glUniform3fv(m_parameters[U_LIGHT0_POSITION], 1, glm::value_ptr(lightPosition_cameraspace));

	modelStack.PushMatrix();
	modelStack.Translate(light[0].position);
	modelStack.Scale(.1f,.1f,.1f);
	RenderMesh(meshList[GEO_LIGHT],false);
	modelStack.PopMatrix();

	glm::mat4 MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	meshList[GEO_AXES]->Render();
	// Render objects

#define PERSON
#define SHOTGUN
//#define GUN

	modelStack.PushMatrix();
	modelStack.LoadIdentity();
	modelStack.Translate(0, -6.6f, 0);
	modelStack.Rotate(-90, 1, 0, 0);
	RenderMesh(meshList[GEO_GROUNDPLANE]);
	modelStack.PopMatrix();

#ifdef SHOTGUN

	modelStack.PushMatrix();
	modelStack.Translate(playerPos);
	if (astate == DANCE)
		modelStack.Translate(0, 1000, 0);
	modelStack.Rotate(playerRotate,0,1,0);
	modelStack.Translate(glm::sin(glm::radians(leftArmRotate)),0,glm::cos(glm::radians(leftArmRotate)));
	modelStack.Rotate(bodyRotate,0,0,1);
	modelStack.Translate(-4.2f, 1.225f, -0.5f);
	{
		modelStack.PushMatrix();
		modelStack.Rotate(90,0,0,1);
		modelStack.Scale(0.1f,2.5f,0.1f);
		RenderMesh(meshList[GEO_METALICCYLINDER]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		modelStack.Translate(0,-.1f,0);
		modelStack.Rotate(90,0,0,1);
		modelStack.Scale(0.1f,2.5f,0.1f);
		RenderMesh(meshList[GEO_METALICCYLINDER]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		modelStack.Translate(1.f,-.34f,0);
		modelStack.Rotate(20,0,0,1);
		modelStack.Scale(0.1f,0.37f,0.05f);
		RenderMesh(meshList[GEO_METALICCUBE]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		modelStack.Translate(1.6f,0.f,0.f);
		modelStack.Scale(0.37f,0.2f,0.1f);
		RenderMesh(meshList[GEO_METALICCUBE]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		modelStack.Translate(1.66f,-0.17f,0);
		modelStack.Rotate(-27.2f,0,0,1);
		modelStack.Scale(0.37f,0.22f,0.1f);
		RenderMesh(meshList[GEO_METALICCUBE]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		//modelStack.Translate(debugTranslate);
		modelStack.Translate(-0.44f,-0.1f,0);
		modelStack.Rotate(90,0,0,1);
		modelStack.Scale(0.17f,0.8f,0.1f);
		RenderMesh(meshList[GEO_METALICCYLINDER]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		modelStack.Translate(-1.f,0.1f,0);
		modelStack.Scale(0.15f,0.03f,0.04f);
		RenderMesh(meshList[GEO_METALICCUBE]);
		modelStack.PopMatrix();
	}
	modelStack.PopMatrix();

#endif

#ifdef GUN
	modelStack.PushMatrix(); // GUN
	
	modelStack.PushMatrix(); // SCOPE
	
	modelStack.PushMatrix(); // SCOPE/STANDS
	modelStack.Scale(0.1f, 0.1f, 0.05f);
	modelStack.Translate(0, 3.f, 0);
	
	modelStack.PushMatrix();
	modelStack.Translate(1.f, 0, 0);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	
	modelStack.PushMatrix();
	modelStack.Translate(-19.f,0,0);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	
	modelStack.PopMatrix(); // SCOPE/STANDS
	
	modelStack.PushMatrix(); // SCOPE/SCOPE
	modelStack.Translate(0.1f,0.1f,0);
	
	modelStack.PushMatrix();
	modelStack.Translate(0, 0.5f, 0);
	modelStack.Rotate(90, 0, 0, 1);
	modelStack.Scale(0.2f, 0.25f, 0.2f);
	RenderMesh(meshList[GEO_CYLINDER], true); // Eye In

	modelStack.PushMatrix();
	modelStack.Translate(0, 0.5f, 0);
	modelStack.Scale(1, 5.f, 1);
	RenderMesh(meshList[GEO_CONE], true);
	modelStack.Translate(0, 1.4f, 0);
	modelStack.Rotate(180, 1, 0, 0);
	RenderMesh(meshList[GEO_CONE], true);
	modelStack.PopMatrix();

	modelStack.Translate(0,8.f,0);
	RenderMesh(meshList[GEO_CYLINDER], true); // Eye Out
	
	//modelStack.PushMatrix();
	//modelStack.Translate(0,3.5f,0);
	//modelStack.Scale(0.25f,1.5f,0.25f);
	//RenderMesh(meshList[GEO_CYLINDER], true); // Zoom Area
	//modelStack.PopMatrix();
	
	modelStack.PopMatrix();
	
	modelStack.PopMatrix(); // SCOPE/SCOPE
	
	modelStack.PopMatrix(); // SCOPE
	
	modelStack.PushMatrix(); // BODY
	modelStack.Scale(1.f, 0.25f, 0.25f);
	
	modelStack.PushMatrix();
	modelStack.Translate(-1.f, 0, 0);
	modelStack.Scale(1.5f, 1.f, 1.f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(1.f, 0.5f, -0.5f);
	modelStack.Scale(.5f, 0.5f, 0.5f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	
	modelStack.PushMatrix();
	modelStack.Translate(1.f, -0.5f, 0.5f);
	modelStack.Scale(.5f, 0.5f, 0.5f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	
	modelStack.PushMatrix();
	modelStack.Translate(1.f, -0.5f, -0.5f);
	modelStack.Scale(.5f, 0.5f, 0.5f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(1.75f, 0, 0);
	modelStack.Scale(0.25f, 1, 1);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(1.f, -1.5f, 0);
	modelStack.Scale(1, 0.5f, 1);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(-0.3f, 0.03f, 0);
	modelStack.Rotate(16, 0, 0, 1);
	modelStack.Translate(0, -1.5f, 0);
	modelStack.Scale(0.25f, 0.5f, 1.f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	// Body/Stock
	modelStack.PushMatrix();
	modelStack.Translate(2.5f, 0.25f, 0);
	modelStack.Scale(0.5f, 0.75f, 1);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(3.15f, -1.72f, 0);
	modelStack.Rotate(6, 0, 0, 1);
	modelStack.Scale(0.15f, 2.75f, 1);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	// Body/Stock

	// Body/BarrelExtension
	modelStack.PushMatrix();
	modelStack.Translate(-2.278f, 0.25f, 0);
	modelStack.Rotate(20, 0, 0, 1);
	modelStack.Scale(0.4f, 1, 1);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(-1.f, -.5f, 0);
	modelStack.Rotate(15, 0, 0, 1);
	modelStack.Scale(1, 1.25f, 1);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	// Body/BarrelExtension

	modelStack.PopMatrix(); // BODY

	modelStack.PushMatrix(); // MARK TRIGGER
	modelStack.PushMatrix();
	modelStack.Translate(1.75f, -1.f, 0);
	modelStack.Rotate(20, 0, 0, 1);
	modelStack.Scale(0.3f, 0.75f, 0.15f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	// ON X AXIS ANIM modelStack.Translate(debugTranslate);
	modelStack.Translate(1.f, -0.6f, 0.f);
	modelStack.Rotate(20, 0, 0, 1);
	modelStack.Scale(0.05f, 0.2f, 0.025f);
	RenderMesh(meshList[GEO_CUBE], true);
	modelStack.PopMatrix();
	
	modelStack.PopMatrix(); // MARK TRIGGER


	modelStack.PushMatrix(); // MARK BARREL
	modelStack.Translate(-3.5f, 0.1f, 0);
	modelStack.Rotate(90, 0, 0, 1);
	modelStack.Scale(0.1f, 2.5f, 0.1f);
	RenderMesh(meshList[GEO_CYLINDER], true);
	modelStack.PopMatrix();

	modelStack.PushMatrix();
	modelStack.Translate(0.75f, .1f, .1f);
	// USE FOR ANIM modelStack.Rotate(debugRotation, debugRotationAxis);
	modelStack.PushMatrix();
	modelStack.Rotate(90, 0, 0, 1);
	modelStack.Scale(.1f, 1.5f, .1f);
	RenderMesh(meshList[GEO_CYLINDER], true);
	modelStack.PopMatrix();
	
	modelStack.PushMatrix();
	modelStack.Translate(0.5f, .2f, .15f);
	modelStack.Rotate(40, 1, 0, 0);
	modelStack.Scale(0.05f, 0.5f, 0.05f);
	RenderMesh(meshList[GEO_CYLINDER], true);
	modelStack.PopMatrix();

	modelStack.PopMatrix(); // MARK BARREL
	
	modelStack.PopMatrix(); // GUN
#endif

#ifdef PERSON

	modelStack.PushMatrix(); // Person
	modelStack.Translate(playerPos);
	modelStack.Rotate(playerRotate,0,1,0);
	modelStack.Rotate(bodyRotate,0,0,1);
	{
		modelStack.PushMatrix(); // Body
		{
			modelStack.PushMatrix(); // Body
			modelStack.Translate(0,-.24f,0);
			modelStack.Scale(0.2f,0.5f,0.24f);
			RenderMesh(meshList[GEO_SPHERE]);
			modelStack.PopMatrix(); // Body

			// Shoulders
			modelStack.PushMatrix();
			modelStack.Translate(0,1.2f,0.6f);
			modelStack.Rotate(-75,1,0,0);
			modelStack.Scale(1,0.5f,1);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix();

			modelStack.PushMatrix();
			modelStack.Translate(0,1.2f,-0.6f);
			modelStack.Rotate(75,1,0,0);
			modelStack.Scale(1,0.5f,1);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix();
			// Shoulders

			modelStack.PushMatrix(); // Right Arm
			modelStack.Translate(0, 1.f, 0.7f);
			modelStack.Rotate(rightArmRotate,0,1,0);
			{
				
				modelStack.PushMatrix();
				modelStack.Translate(0,0,1.1f);
				modelStack.Rotate(90, 1, 0, 0);
				modelStack.Scale(0.35f, 2.f, 0.35f);
				RenderMesh(meshList[GEO_CYLINDER]);
				modelStack.PopMatrix();

				modelStack.PushMatrix(); // Lower Arm
				modelStack.Translate(0, 0, 2.1f);
				modelStack.Rotate(-56.f,0,1,0);
				modelStack.Rotate(elbowDownRotate, 0, 1, 0);
				{
					modelStack.PushMatrix();
					modelStack.Rotate(90,1,0,0);
					modelStack.Scale(0.2f, 1.6f, 0.2f);
					modelStack.Translate(0, 0.5f, 0);
					RenderMesh(meshList[GEO_CYLINDER]);
					modelStack.PopMatrix();

					modelStack.PushMatrix(); // Hands
					modelStack.Translate(0,5e-07,1.6f);
					modelStack.Rotate(-27.5f,0,0,1);
					{
						modelStack.PushMatrix();
						modelStack.Rotate(90,1,0,0);
						modelStack.Scale(0.065f,0.37f,0.32f);
						modelStack.Translate(0,1,0);
						RenderMesh(meshList[GEO_CUBE]);
						modelStack.PopMatrix();
					}
					modelStack.PopMatrix(); // Hands
				}
				modelStack.PopMatrix(); // Lower Arm
			}
		modelStack.PopMatrix(); // Right Arm

		modelStack.PushMatrix(); // Left Arm
		modelStack.Translate(0, 1.f, -0.7f);
		modelStack.Rotate(leftArmRotate,0,1,0);
		{
			modelStack.PushMatrix();
			modelStack.Translate(0, 0, -1.1f);
			modelStack.Rotate(-90, 1, 0, 0);
			modelStack.Scale(0.35f, 2.f, 0.35f);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix();

			modelStack.PushMatrix(); // Lower Arm
			modelStack.Translate(0, 0, -2.1f);
			modelStack.Rotate(110,0,1,0.136f);
			{
				modelStack.PushMatrix();
				modelStack.Rotate(-90,1,0,0);
				modelStack.Scale(0.2f, 1.6f, 0.2f);
				modelStack.Translate(0, .5f, 0);
				RenderMesh(meshList[GEO_CYLINDER]);
				modelStack.PopMatrix();

				modelStack.PushMatrix(); // Hands
				modelStack.Translate(0,5e-07,-1.6f);
				modelStack.Rotate(-32.f,0,0,1);
				{
					modelStack.PushMatrix();
					modelStack.Scale(0.065f,0.37f,0.32f);
					modelStack.Translate(0,0,-1.f);
					RenderMesh(meshList[GEO_CUBE]);
					modelStack.PopMatrix();
				}
				modelStack.PopMatrix(); // Hands
			}
			modelStack.PopMatrix(); // Lower Arm
		}
		modelStack.PopMatrix(); // Left Arm

		modelStack.PushMatrix(); // Stomach Plate
		modelStack.Translate(-0.66f,1.f,0);
		modelStack.Rotate(180,0,0,1);
		modelStack.Scale(0.32f,0.68f,0.78f);
		RenderMesh(meshList[GEO_HALFSPHERE]);
		modelStack.PopMatrix(); // Stomach Plate

		modelStack.PushMatrix(); // Sides Plates
		modelStack.Translate(0, 0.765f, 0.54f);
		modelStack.Rotate(60, 1, 0, 0);
		modelStack.Scale(0.7f, 0.55f, 0.85f);
		RenderMesh(meshList[GEO_CYLINDER]);
		modelStack.PopMatrix();

		modelStack.PushMatrix();
		modelStack.Translate(0, 0.765f, -0.54f);
		modelStack.Rotate(-60, 1, 0, 0);
		modelStack.Scale(0.7f, 0.55f, 0.85f);
		RenderMesh(meshList[GEO_CYLINDER]);
		modelStack.PopMatrix(); // Sides Plates

		modelStack.PushMatrix(); // LLegBase
		modelStack.Translate(0, -1.f, -0.75f);
		modelStack.Rotate(-walk, 0, 0, 1);
		modelStack.Translate(0, -1.f, 0);
		{
			modelStack.PushMatrix(); // KneeAbove
			modelStack.Translate(0, -1.f, 0);
			modelStack.Scale(0.6f, 0.6f, 0.66f);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix(); // KneeAbove

			modelStack.PushMatrix(); // LLeg
			modelStack.Scale(0.5f, 2.5f, 0.5f);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix(); // LLeg

			modelStack.PushMatrix(); // Knee Below
			{

				modelStack.PushMatrix(); // Knee Pad
				modelStack.Translate(0, -1.6f, 0);
				modelStack.Rotate(walk, 0, 0, 1);
				modelStack.Rotate(kneeBend, 0, 0, 1);
				{
					modelStack.PushMatrix();
					modelStack.Scale(0.5f, 0.625f, 0.5f);
					RenderMesh(meshList[GEO_BLACKCYLINDER]);
					modelStack.PopMatrix();

					modelStack.PushMatrix();
					modelStack.Translate(-0.425f,0,0);
					modelStack.Rotate(90, 0, 0, 1);
					modelStack.Scale(0.37f, 0.2f, 0.42f);
					RenderMesh(meshList[GEO_HALFSPHERE]);
					modelStack.PopMatrix();

					modelStack.PushMatrix(); // Lower Leg
					//modelStack.Translate(0, -1.5f, 0);
					modelStack.Rotate(-walk/2, 0, 0, 1);
					//modelStack.Rotate(debugRotation, debugRotationAxis);
					{
						modelStack.PushMatrix();
						modelStack.Translate(0, -1.1f, 0);
						modelStack.Scale(0.35f, 2.4f, 0.35f);
						RenderMesh(meshList[GEO_CYLINDER]);
						modelStack.PopMatrix();

						modelStack.PushMatrix(); // LFoot
						modelStack.Translate(0, -2.5f, 0);
						modelStack.Rotate(-walk, 0, 0, 1);
						modelStack.Rotate(footRotate, 0, 0, 1);
						//modelStack.Rotate(debugRotation, debugRotationAxis);
						{
							modelStack.PushMatrix();
							modelStack.Translate(-0.5f, 0, 0);
							modelStack.Scale(1.f, 0.35f, 0.35f);
							RenderMesh(meshList[GEO_CUBE]);
							modelStack.PopMatrix();
						}
						modelStack.PopMatrix(); // LFoot
					}
					modelStack.PopMatrix(); // Lower Leg
				}
				modelStack.PopMatrix(); // Knee Below
			}
			modelStack.PopMatrix(); // Knee Pad
		}
		modelStack.PopMatrix(); // LLegBase

		modelStack.PushMatrix(); // RLegBase
		modelStack.Translate(0, -1.f, 0.75f);
		modelStack.Rotate(walk, 0,0,1);
		modelStack.Translate(0, -1.f, 0);
		{
			modelStack.PushMatrix(); // KneeAbove
			modelStack.Translate(0, -1.f, 0);
			modelStack.Scale(0.6f, 0.6f, 0.66f);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix(); // KneeAbove

			modelStack.PushMatrix(); // Knee Below
			{
				modelStack.PushMatrix(); // Knee Pad
				modelStack.Translate(0, -1.6f, 0);
				modelStack.Rotate(-walk, 0, 0, 1);
				modelStack.Rotate(kneeBend, 0, 0, 1);
				{
					modelStack.PushMatrix();
					modelStack.Scale(0.5f, 0.625f, 0.5f);
					RenderMesh(meshList[GEO_BLACKCYLINDER]);
					modelStack.PopMatrix();

					modelStack.PushMatrix();
					modelStack.Translate(-0.425f, 0, 0);
					modelStack.Rotate(90, 0, 0, 1);
					modelStack.Scale(0.37f, 0.2f, 0.42f);
					RenderMesh(meshList[GEO_HALFSPHERE]);
					modelStack.PopMatrix();

					modelStack.PushMatrix(); // Lower Leg
					//modelStack.Translate(0, 0, 0);
					modelStack.Rotate(walk/2, 0, 0, 1);
					//modelStack.Rotate(debugRotation, debugRotationAxis);
					{
						modelStack.PushMatrix();
						modelStack.Translate(0, -1.1f, 0);
						modelStack.Scale(0.35f, 2.4f, 0.35f);
						RenderMesh(meshList[GEO_CYLINDER]);
						modelStack.PopMatrix();

						modelStack.PushMatrix(); // RFoot
						modelStack.Translate(0, -2.5f, 0);
						modelStack.Rotate(walk, 0, 0, 1);
						modelStack.Rotate(footRotate, 0, 0, 1);
						//modelStack.Rotate(debugRotation, debugRotationAxis);
						{
							modelStack.PushMatrix();
							modelStack.Translate(-0.5f, 0, 0);
							modelStack.Scale(1.f, 0.35f, 0.35f);
							RenderMesh(meshList[GEO_CUBE]);
							modelStack.PopMatrix();

						}
						modelStack.PopMatrix(); // RFoot
					}
					modelStack.PopMatrix(); // Lower Leg
				}
				modelStack.PopMatrix(); // Knee Pad
			}
			modelStack.PopMatrix(); // Knee Below

			modelStack.PushMatrix(); // RLeg
			modelStack.Scale(0.5f, 2.5f, 0.5f);
			RenderMesh(meshList[GEO_CYLINDER]);
			modelStack.PopMatrix(); // RLeg
		}
		modelStack.PopMatrix(); // RLegBase

		}
		modelStack.PopMatrix(); // Body

		modelStack.PushMatrix(); // Neck
		modelStack.Translate(0, 1.5f, 0);
		modelStack.Scale(0.5f, 1.5f, 0.5f);
		RenderMesh(meshList[GEO_CONE], true);
		modelStack.PopMatrix(); // Neck

		modelStack.PushMatrix(); // Head
		modelStack.Translate(0, 2.5f, 0);
		{
			modelStack.PushMatrix(); // Top Helmet
			modelStack.Translate(0, 0.3f, 0);
			modelStack.Scale(0.6f, 0.5f, 0.6f);
			RenderMesh(meshList[GEO_HALFSPHERE], true);
			modelStack.PopMatrix(); // Top Helmet

			modelStack.PushMatrix(); // Bottom Helmet
			modelStack.Translate(0, -0.3f, 0);
			modelStack.Rotate(180, 1, 0, 0);
			modelStack.Scale(0.6f, 0.5f, 0.6f);
			RenderMesh(meshList[GEO_HALFSPHERE], true);
			modelStack.PopMatrix(); // Bottom Helmet

			modelStack.PushMatrix(); // Sides
			modelStack.Translate(0,0,0.5f);
			modelStack.Scale(0.2f, 0.3f, 0.06f);
			RenderMesh(meshList[GEO_CUBE], true);
			modelStack.PopMatrix();
			modelStack.PushMatrix();
			modelStack.Translate(0, 0, -0.5f);
			modelStack.Scale(0.2f, 0.3f, 0.06f);
			RenderMesh(meshList[GEO_CUBE], true);
			modelStack.PopMatrix(); // Sides

			modelStack.PushMatrix();
			modelStack.Translate(-0.35f, -0.2f, -0.28f);
			modelStack.Rotate(-40, 0, 1, 0);
			modelStack.Scale(0.06f, 0.1f, 0.3f);
			RenderMesh(meshList[GEO_CUBE]);
			modelStack.PopMatrix();

			modelStack.PushMatrix();
			modelStack.Translate(-0.35f, -0.2f, 0.28f);
			modelStack.Rotate(40, 0, 1, 0);
			modelStack.Scale(0.06f, 0.1f, 0.3f);
			RenderMesh(meshList[GEO_CUBE]);
			modelStack.PopMatrix();

			modelStack.PushMatrix();
			modelStack.Scale(0.5f, 1, 0.5f);
			RenderMesh(meshList[GEO_FACESHIELD], true);
			modelStack.PopMatrix();
		}
		modelStack.PopMatrix(); // Head
	}
	modelStack.PopMatrix(); // Person

#endif

}

void ICA::Exit()
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

float power = 0;

void ICA::HandleKeyPress(double dt) 
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
	if (in->IsKeyPressed(GLFW_KEY_P))
	{
		projType = !projType;
	}
	if (in->IsKeyPressed(GLFW_KEY_P))
	{
		if (enableLight)
		{
			power = light[0].power;
			light[0].power = 0;
		}
		else
			light[0].power = power;
		enableLight = !enableLight;
	}
	if (in->IsKeyDown(GLFW_KEY_R))
		light[0].power += 4 * dt;
	if (in->IsKeyDown(GLFW_KEY_F))
		light[0].power -= 4 * dt;
	glm::vec3 delta{};
	if (in->IsKeyDown(GLFW_KEY_O))
		delta.y = 1;
	if (in->IsKeyDown(GLFW_KEY_U))
		delta.y = -1;
	if (in->IsKeyDown(GLFW_KEY_L))
		delta.x = 1;
	if (in->IsKeyDown(GLFW_KEY_J))
		delta.x = -1;
	if (in->IsKeyDown(GLFW_KEY_I))
		delta.z = 1;
	if (in->IsKeyDown(GLFW_KEY_K))
		delta.z = -1;
	light[0].position += delta;
	/*
	
    if (in->IsKeyPressed(GLFW_KEY_KP_1))
    {
        debug = &dbt[dbtindex].debugTranslate;
        std::cout << "DEBUGGING TRANSLATE" << std::endl;
        std::cout << dbt[dbtindex].debugTranslate.x << '|' << dbt[dbtindex].debugTranslate.y << '|' << dbt[dbtindex].debugTranslate.z << std::endl;
		std::cout << "INDEX: " << dbtindex << std::endl;
	}
    if (in->IsKeyPressed(GLFW_KEY_KP_2))
    {
        debug = &dbt[dbtindex].debugRotationAxis;
        std::cout << "DEBUGGING ROTATION" << std::endl;
		std::cout << dbt[dbtindex].debugRotationAxis.x << '|' << dbt[dbtindex].debugRotationAxis.y << '|' << dbt[dbtindex].debugRotationAxis.z << ',' << debugRotation[dbtindex] << std::endl;
		std::cout << "INDEX: " << dbtindex << std::endl;
	}
    if (in->IsKeyPressed(GLFW_KEY_KP_3))
    {
        debug = &dbt[dbtindex].debugScale;
        std::cout << "DEBUGGING SCALE" << std::endl;
        std::cout << dbt[dbtindex].debugScale.x << '|' << dbt[dbtindex].debugScale.y << '|' << dbt[dbtindex].debugScale.z << std::endl;
		std::cout << "INDEX: " << dbtindex << std::endl;
	}
    if (in->IsKeyDown(GLFW_KEY_KP_7))
        debug->x += dt;
    if (in->IsKeyDown(GLFW_KEY_KP_8))
        debug->y += dt;
    if (in->IsKeyDown(GLFW_KEY_KP_9))
        debug->z += dt;
    if (in->IsKeyDown(GLFW_KEY_KP_4))
        debug->x -= dt;
    if (in->IsKeyDown(GLFW_KEY_KP_5))
        debug->y -= dt;
    if (in->IsKeyDown(GLFW_KEY_KP_6))
        debug->z -= dt;
	if (in->IsKeyDown(GLFW_KEY_KP_ADD))
		debugRotation[dbtindex] += dt*10;
	if (in->IsKeyDown(GLFW_KEY_KP_SUBTRACT))
		debugRotation[dbtindex] -= dt*10;
    if (in->IsKeyPressed(GLFW_KEY_ENTER))
    {
        std::cout << "PRINTED SNAPSHOT" << std::endl;
        std::ofstream debugoutput;
		debugoutput.open("SNAPSHOT.txt");
		for (int i = 0; i < 10; ++i)
		{
			debugoutput << "INDEX: " << i << std::endl;
        debugoutput << "TRANSLATION: " << dbt[i].debugTranslate.x << '|' << dbt[i].debugTranslate.y << '|' << dbt[i].debugTranslate.z << std::endl;
        debugoutput << "ROTATIONAXIS: " << dbt[i].debugRotationAxis.x << '|' << dbt[i].debugRotationAxis.y << '|' << dbt[i].debugRotationAxis.z << ',' << debugRotation[i] << std::endl;
        debugoutput << "SCALE: " << dbt[i].debugScale.x << '|' << dbt[i].debugScale.y << '|' << dbt[i].debugScale.z << std::endl;
		}
        debugoutput.close();
    }
	dbt[dbtindex].debugRotationAxis = glm::clamp(dbt[dbtindex].debugRotationAxis, { -1,-1,-1 }, { 1,1,1 });
	if (in->IsKeyPressed(GLFW_KEY_KP_MULTIPLY))
	{
		dbtindex < 9 ? ++dbtindex : dbtindex;
		std::cout << "INDEX: " << dbtindex << std::endl;
	}
	if (in->IsKeyPressed(GLFW_KEY_KP_DIVIDE))
	{
		dbtindex > 0 ? --dbtindex : dbtindex;
		std::cout << "INDEX: " << dbtindex << std::endl;
	}
	if (in->IsKeyPressed(GLFW_KEY_KP_0))
		*debug = {0,0,0};
	if (in->IsKeyPressed(GLFW_KEY_KP_DECIMAL))
		debugRotation[dbtindex] = 0;
	*/
	if (in->IsKeyDown(GLFW_KEY_A))
		playerRotate += 3;
	if (in->IsKeyDown(GLFW_KEY_D))
		playerRotate -= 3;
	playerDist = 0;
	if (in->IsKeyDown(GLFW_KEY_W))
	{
		playerDist = 0.5f;
		walkCycle += 0.25f;
	}
	if (in->IsKeyDown(GLFW_KEY_S))
	{
		playerDist = -0.5f;
		walkCycle -= 0.25f;
	}
	glm::vec3 pdelta{glm::cos(glm::radians(playerRotate))*playerDist,0,-glm::sin(glm::radians(playerRotate))*playerDist};
	playerPos -= pdelta;
	if (in->IsKeyPressed(GLFW_KEY_6))
	{
		astate = DANCE;
		handWave = 0;
		rightArmRotate = -72;
		leftArmRotate = 52;
		walk = 0;
		playerPos.y = 0;
		kneeBend = 0;
	}
	if (in->IsKeyPressed(GLFW_KEY_7))
	{
		astate = JUMP;
		jumpSine = 0;
		rightArmRotate = -72;
		leftArmRotate = 52;
		bodyRotate = 0;
		footRotate = 0;
		walk = 0;
		kneeBend = 0;
	}
	if (in->IsKeyPressed(GLFW_KEY_5))
	{
		astate = WALK;
		rightArmRotate = -72;
		leftArmRotate = 52;
		kneeBend = 0;
	}
	if (in->IsKeyPressed(GLFW_KEY_8))
	{
		reloadSine = 0;
		rightArmRotate = -72;
		leftArmRotate = 52;
		reloaded = false;
		astate = RELOAD;
	}
	if (in->IsKeyPressed(GLFW_KEY_9))
	{
		astate = WALK;
		jumpSine = 0;
		handWave = 0;
		handRotate = 0;
		legRotate = 0;
		bodyRotate = 0;
		footRotate = 0;
		leftArmRotate = 52;
		rightArmRotate = -72;
		walk = 0;
		playerDist = 0;
		playerRotate = 0;
		walkCycle = 0;
		playerPos = { 0,0,0 };
		kneeBend = 0;
		reloadSine = 0;
		elbowDownRotate = 0;
		elbowOffset = 0;
		reloaded = false;
	}
}

void ICA::RenderMesh(Mesh* mesh, bool enableLight)
{
    glm::mat4 MVP, modelView, modelView_inverse_transpose;

    MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
    glUniformMatrix4fv(m_parameters[U_MVP], 1, GL_FALSE, glm::value_ptr(MVP));
    modelView = viewStack.Top() * modelStack.Top();
    glUniformMatrix4fv(m_parameters[U_MODELVIEW], 1, GL_FALSE, glm::value_ptr(modelView));
    if (enableLight)
    {
        glUniform1i(m_parameters[U_LIGHTENABLED], 1);
        modelView_inverse_transpose = glm::inverseTranspose(modelView);
        glUniformMatrix4fv(m_parameters[U_MODELVIEW_INVERSE_TRANSPOSE], 1, GL_FALSE, 
                            glm::value_ptr(modelView_inverse_transpose));

        //load mat
        glUniform3fv(m_parameters[U_MATERIAL_AMBIENT], 1, &mesh->mat.ambient.r);
        glUniform3fv(m_parameters[U_MATERIAL_DIFFUSE], 1, &mesh->mat.diffuse.r);
        glUniform3fv(m_parameters[U_MATERIAL_SPECULAR], 1, &mesh->mat.specular.r);
        glUniform1f(m_parameters[U_MATERIAL_SHININESS], mesh->mat.shininess);
    }
    else
    {
        glUniform1i(m_parameters[U_LIGHTENABLED], 0);
    }
	mesh->Render();
}
