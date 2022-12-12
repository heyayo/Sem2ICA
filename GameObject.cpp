
#include "GameObject.h"

GameObject::GameObject(Mesh* giveMesh)
	: mesh(giveMesh),
	scale(1,1,1),
	mass(1.f),
	active(false)
{}

GameObject::~GameObject()
{
}

