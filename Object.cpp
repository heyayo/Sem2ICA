#include "Object.hpp"

Object::Object(Mesh* newmesh) : mesh(newmesh)
{

}

Object::Object(Mesh* newmesh, Object *p) : mesh(newmesh), parent(p)
{

}

Object::~Object()
{

}

void Object::move(const glm::vec3 &distance)
{
    position += distance;
}

void Object::move(const float &x, const float &y, const float &z)
{
    position += glm::vec3{x,y,z};
}

void Object::rotate(const glm::vec3 &rotate)
{
    rotation += rotate;
}

void Object::rotate(const float &x, const float &y, const float &z)
{
    rotation += glm::vec3{x,y,z};
}

void Object::scale(const glm::vec3 &scale)
{
    scaler += scale;
}

void Object::scale(const float &x, const float &y, const float &z)
{
    scaler += glm::vec3{x,y,z};
}
