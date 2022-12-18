#include "GameObject.h"
#include "MyMath.h"
#include <cmath>

GameObject::GameObject(Mesh* giveMesh)
	: mesh(giveMesh),
	scale(1,1,1),
	mass(1.f),
	active(false),
	multiplier(1/mass)
{}

GameObject::~GameObject()
{
}

float GameObject::DirectionTo(const Vector3& target)
{
	Vector3 delta = target-pos;
	float angle = atan2(delta.y,delta.x);
	return angle;
}

void GameObject::ActOn(float strength, float direction)
{
    float x = sin(direction)*strength;
    float y = cos(direction)*strength;

    force = {x,y,0};
}

