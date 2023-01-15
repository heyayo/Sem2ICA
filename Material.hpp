#ifndef MATERIAL_HPP
#define MATERIAL_HPP
#include <glm.hpp>
struct Component
{
	float r,g,b;

    Component& operator=(const Component& other)
    {
        r = other.r;
        g = other.g;
        b = other.b;
        return *this;
    }
};
struct Material
{
	Component ambient;
	Component diffuse;
	Component specular;
	float shininess;
    unsigned size;

    Material& operator=(const Material& other)
    {
        ambient = other.ambient;
        diffuse = other.diffuse;
        specular = other.specular;
        shininess = other.shininess;
        size = other.size;
        return *this;
    }
};
#endif
