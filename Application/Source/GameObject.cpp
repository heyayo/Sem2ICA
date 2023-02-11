#include "GameObject.h"

#include <common.hpp>

static Vector3 RotateVector(const Vector3& vec, float radian)
{
 return Vector3(vec.x * cos(radian) + vec.y * -sin(radian), vec.x * sin(radian) + vec.y * cos(radian), 0.f);
}

void GameObject::Recalculate()
{
 momentOfInertia = mass * scale.x * scale.x;
 multiplier = 1.f/mass;
}

void GameObject::Displace(double deltaTime)
{
 vel.z = 0;
 oldVel.z = 0;
 normal = {std::cos(angle),std::sin(angle),0};
 pos += 0.5f * (oldVel + vel) * static_cast<float>(deltaTime);
 //angle += angularVelocity;
 dir = RotateVector(dir,angularVelocity*static_cast<float>(deltaTime));
 angle = std::atan2(dir.y,dir.x);
 oldVel = vel;
 change = pos - oldPos;
 oldPos = pos;
}

void GameObject::ApplyCWForce(double deltaTime, const float timescale)
{
 Vector3 torque = Vector3(-scale.x,scale.y,0).Cross(Vector3(timescale,0,0));
 float acceleration = torque.z / momentOfInertia;
 angularVelocity += acceleration * static_cast<float>(deltaTime);
 angularVelocity = glm::clamp(angularVelocity,-5.f,5.f);
}

void GameObject::ApplyCCWForce(double deltaTime, const float timescale)
{
 Vector3 torque = Vector3(-scale.x,-scale.y,0).Cross(Vector3(timescale,0,0));
 float acceleration = torque.z / momentOfInertia;
 angularVelocity += acceleration * static_cast<float>(deltaTime);
 angularVelocity = glm::clamp(angularVelocity,-5.f,5.f);
}

GameObject::GameObject(Mesh* newMesh)
 : mesh(newMesh)
{
 momentOfInertia = mass * scale.x * scale.x;
 angularVelocity = 0;
 dir = {1,0,0};
}

GameObject::~GameObject()
{
}

