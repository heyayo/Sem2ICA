#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include "Vector3.h"
#include "Mesh.h"
#include "physics.hpp"

struct GameObject
{
	Mesh* mesh;
	Vector3 pos;
	Vector3 vel;
	Vector3 scale;
	bool active;
	float mass;

	GameObject(Mesh* giveMesh);
	~GameObject();
};
#endif

