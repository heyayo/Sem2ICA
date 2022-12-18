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
    Vector3 force;
	float multiplier;
    float rotation = 0;

	GameObject(Mesh* giveMesh);
	~GameObject();

    void ActOn(float strength, float direction);
	float DirectionTo(const Vector3& target);
};
#endif

