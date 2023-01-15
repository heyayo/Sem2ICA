#ifndef LIGHTOBJECT_HPP
#define LIGHTOBJECT_HPP
#include "GL/glew.h"
#include "glm.hpp"
class LightObject
{
	float power = 1.f;
	glm::vec3 position;

public:
	void setPosition(const glm::vec3& nPos)
	{
		position = nPos;
	}
	void setPower(float npower)
	{
		power = npower;
	}
	glm::vec3 getPosition()
	{
		return position;
	}
	float getPower()
	{
		return power;
	}
};
#endif