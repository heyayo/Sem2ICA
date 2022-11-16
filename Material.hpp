#ifndef MATERIAL_HPP
#define MATERIAL_HPP
#include <glm.hpp>
struct Component
{
	float r,g,b;
};
struct Material
{
	Component ambient;
	Component diffuse;
	Component specular;
	float shininess;
};
#endif
