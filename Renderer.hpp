#ifndef RENDERER_HPP
#define RENDERER_HPP
#include "shader.hpp"
#include "AACam.hpp"
#include "Object.hpp"
#include "GL/glew.h"
class Renderer
{
	unsigned ProgramID;
	unsigned VA_ID;
	glm::vec4 bgColor{};
	AACam defaultCam;
	AACam* camera = &defaultCam;

	// Shader Params
	unsigned o_MVP;
	unsigned o_modelView;
	unsigned o_inverseTranspose;
	unsigned m_ambient;
	unsigned m_diffuse;
	unsigned m_specular;
	unsigned m_shininess;
	unsigned l_position;
	unsigned l_color;
	unsigned l_power;
	unsigned l_kC;
	unsigned l_kL;
	unsigned l_kQ;
	unsigned l_Enabled;

	GLuint LoadShader(const char* filePath, unsigned shaderType);
	void Init();

public:
	Renderer();
	~Renderer();
	void Render(Object* target);
	AACam* getCamera();
};
#endif
