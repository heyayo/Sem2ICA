#include <iostream>
#include "Galaxy.hpp"
#include "GL/glew.h"

#include "ext/matrix_clip_space.hpp"
#include <gtc/matrix_inverse.hpp>
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
	meshList[GEO_SUN] = MeshBuilder::GenerateSphere("SUN",{0.9f,0.3f,0.f},4,32,32);
	meshList[GEO_EARTH] = MeshBuilder::GenerateSphere("EARTH",{0.4f,0.2f,0.8f},1,32,32);
	meshList[GEO_MOON] = MeshBuilder::GenerateSphere("MOON",{0.5f,0.5f,0.5f},0.2f,32,32);
	meshList[GEO_CYLINDER] = MeshBuilder::GenerateCylinder("CYL",{1,1,1},32,1,1);
	meshList[GEO_LIGHT] = MeshBuilder::GenerateSphere("BULB",{1,1,1},1,8,8);
	meshList[GEO_SUN]->mat.ambient = {0.1f, 0.1f, 0.1f};
	meshList[GEO_SUN]->mat.diffuse = {0.5f, 0.5f, 0.5f};
	meshList[GEO_SUN]->mat.specular = {0.9f, 0.9f, 0.9f};
	meshList[GEO_SUN]->mat.shininess = 5.0f;
	meshList[GEO_MOON]->mat.ambient = {0.1f, 0.1f, 0.1f};
	meshList[GEO_MOON]->mat.ambient = {0.1f, 0.1f, 0.1f};
	meshList[GEO_MOON]->mat.diffuse = {0.5f, 0.5f, 0.5f};
	meshList[GEO_MOON]->mat.specular = {0.9f, 0.9f, 0.9f};
	meshList[GEO_EARTH]->mat.shininess = 5.0f;
	meshList[GEO_EARTH]->mat.diffuse = {0.5f, 0.5f, 0.5f};
	meshList[GEO_EARTH]->mat.specular = {0.9f, 0.9f, 0.9f};
	meshList[GEO_EARTH]->mat.shininess = 5.0f;
}

void Galaxy::Update(double dt)
{
	// Check for key press, you can add more for interaction
	HandleKeyPress(dt);

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

	glUniform1f(m_parameters[U_LIGHT0_POWER], light[0].power);
	glm::vec3 lightPosition_cameraspace = viewStack.Top() * glm::vec4(light[0].position, 1);
	glUniform3fv(m_parameters[U_LIGHT0_POSITION], 1, glm::value_ptr(lightPosition_cameraspace));

	modelStack.PushMatrix();
	modelStack.Translate(light[0].position);
	modelStack.Scale(.1f,.1f,.1f);
	RenderMesh(meshList[GEO_LIGHT],false);
	modelStack.PopMatrix();

	// Setup Model View Projection matrix
	glm::mat4 MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	meshList[GEO_AXES]->Render();

	RenderMesh(meshList[GEO_SUN]);
	modelStack.LoadIdentity();
	modelStack.PushMatrix();
	modelStack.Rotate(earthRot,0,1,0);
	modelStack.Translate(10,0,0);
	modelStack.Rotate(earthRot,0,1,0);
	MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	RenderMesh(meshList[GEO_EARTH]);
	
	modelStack.PushMatrix();
	modelStack.Translate(2,0,0);
	modelStack.Rotate(moonRot,0,1,0);
	MVP = projectionStack.Top() * viewStack.Top() * modelStack.Top();
	glUniformMatrix4fv(m_parameters[U_MVP],1,GL_FALSE,glm::value_ptr(MVP));
	RenderMesh(meshList[GEO_MOON]);
	modelStack.PopMatrix();
	modelStack.PopMatrix();
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

float power = 0;

void Galaxy::HandleKeyPress(double dt) 
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
	if (in->IsKeyDown(GLFW_KEY_ENTER))
		std::cout << light[0].power << std::endl;
}

void Galaxy::RenderMesh(Mesh* mesh, bool enableLight)
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
