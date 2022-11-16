#include "Renderer.hpp"
#include "glm.hpp"
#include "gtc/matrix_inverse.hpp"
#include <fstream>
#include <iostream>

GLuint Renderer::LoadShader(const char* filePath, unsigned shaderType)
{
	GLuint ShaderID = glCreateShader(shaderType);

	// Read the Vertex Shader code from the file
	std::string shaderCode;
	std::ifstream shaderStream(filePath, std::ios::in);
	if (!shaderStream.is_open())
		std::runtime_error("Failed to Open Shader");
	{
		std::string line{};
		while (getline(shaderStream, line))
			shaderCode += "\n" + line;
		shaderStream.close();
	}

	std::cout << "Compiling Shader " << filePath << std::endl;
	auto shaderSource = shaderCode.c_str();
	glShaderSource(ShaderID, 1, &shaderSource, NULL);
	glCompileShader(ShaderID);

	GLint result = GL_FALSE;
	int infoLogLength;

	glGetShaderiv(ShaderID, GL_COMPILE_STATUS, &result);
	glGetShaderiv(ShaderID, GL_INFO_LOG_LENGTH, &infoLogLength);
	if (infoLogLength > 0)
	{
		std::vector<char> shaderErrorMsg(infoLogLength + 1);
		glGetShaderInfoLog(ShaderID, infoLogLength, NULL, &shaderErrorMsg[0]);
		std::string shaderError(shaderErrorMsg.begin(), shaderErrorMsg.end());
		std::runtime_error(shaderError.c_str());
	}
	return ShaderID;
}

void Renderer::Init()
{
	std::cout << "Linking Shaders" << std::endl;
	ProgramID = glCreateProgram();
	GLuint v = LoadShader("Shader//Shading.vertexshader", GL_VERTEX_SHADER);
	GLuint f = LoadShader("Shader//Shading.fragmentshader", GL_FRAGMENT_SHADER);
	glAttachShader(ProgramID, v);
	glAttachShader(ProgramID, f);
	glLinkProgram(ProgramID);

	GLint result = GL_FALSE;
	int infoLogLength;
	char* infoLog;
	glGetProgramiv(ProgramID, GL_LINK_STATUS, &result);
	glGetProgramiv(ProgramID, GL_INFO_LOG_LENGTH, &infoLogLength);
	if (infoLogLength > 0)
	{
		glGetProgramInfoLog(ProgramID, infoLogLength, NULL, infoLog);
		std::runtime_error(static_cast<const char*>(infoLog));
	}

	glDeleteShader(f);
	glDeleteShader(v);

	glUseProgram(ProgramID);
	glGenVertexArrays(1, &VA_ID);
	glBindVertexArray(VA_ID);

	defaultCam.init(45.f, 45.f, 10.f);

	o_MVP = glGetUniformLocation(ProgramID, "MVP");
	o_modelView = glGetUniformLocation(ProgramID, "MV");
	o_inverseTranspose = glGetUniformLocation(ProgramID, "MV_inverse_transpose");
	m_ambient = glGetUniformLocation(ProgramID, "material.kAmbient");
	m_diffuse = glGetUniformLocation(ProgramID, "material.kDiffuse");
	m_specular = glGetUniformLocation(ProgramID, "material.kSpecular");
	m_shininess = glGetUniformLocation(ProgramID, "material.kShininess");
	l_position = glGetUniformLocation(ProgramID, "lights[0].position_cameraspace");
	l_color = glGetUniformLocation(ProgramID, "lights[0].color");
	l_power = glGetUniformLocation(ProgramID, "lights[0].power");
	l_kC = glGetUniformLocation(ProgramID, "lights[0].kC");
	l_kL = glGetUniformLocation(ProgramID, "lights[0].kL");
	l_kQ = glGetUniformLocation(ProgramID, "lights[0].kQ");
	l_Enabled = glGetUniformLocation(ProgramID, "lightEnabled");
	
	glClearColor(bgColor.r, bgColor.g, bgColor.b, bgColor.w);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

Renderer::Renderer()
{
	Init();
}

Renderer::~Renderer()
{
	glDeleteVertexArrays(1, &VA_ID);
	glDeleteProgram(ProgramID);
}

void Renderer::Render(Object* target)
{
	glm::mat4 MVP, mV, mVIT;

	MVP = camera->projection * camera->view * target->transforms.Top();
	glUniformMatrix4fv(o_MVP, 1, GL_FALSE, glm::value_ptr(MVP));
	mV = camera->view * target->transforms.Top();
	glUniformMatrix4fv(o_modelView, 1, GL_FALSE, glm::value_ptr(mV));
	glUniform1i(l_Enabled, 1);
	mVIT = glm::inverseTranspose(mV);
	glUniformMatrix4fv(o_inverseTranspose, 1, GL_FALSE, glm::value_ptr(mVIT));
	glUniform3fv(m_ambient, 1, &target->mesh->mat.ambient.r);
	glUniform3fv(m_ambient, 1, &target->mesh->mat.diffuse.r);
	glUniform3fv(m_ambient, 1, &target->mesh->mat.specular.r);
	glUniform1f(m_ambient, target->mesh->mat.shininess);
	
	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);
	glEnableVertexAttribArray(2);

	target->mesh->Render();
}

AACam* Renderer::getCamera()
{
	return camera;
}
