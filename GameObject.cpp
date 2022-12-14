#include "GameObject.h"
#include "MyMath.h"
#include <cmath>

GameObject::GameObject(Mesh* giveMesh)
	: mesh(giveMesh),
	scale(1,1,1),
	mass(1.f),
	active(false)
{}

GameObject::~GameObject()
{
}

float GameObject::DirectionTo(const Vector3& target)
{
	auto direction = target-pos;
	float angle = (direction.x) / direction.Length();
	angle = std::asin(angle);
	angle = Math::RadianToDegree(angle);
	return angle;
}

void GameObject::ActOn(float strength, float direction)
{
	auto radianDirection = Math::DegreeToRadian(direction);
    float x = sin(radianDirection)*strength;
    float y = cos(radianDirection)*strength;

    force = {x,y,0};
}

