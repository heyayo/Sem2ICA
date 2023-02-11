#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include "Vector3.h"
#include "Mesh.h"

struct GameObject
{
	Mesh* mesh;
	Vector3 pos{};
	Vector3 oldPos{};
	Vector3 change{};
	Vector3 vel{};
	Vector3 oldVel{};
	Vector3 scale{1,1,1};
	float mass = 1.f;
	float multiplier = 1.f / mass;

	Vector3 dir{};
	float momentOfInertia{};
	float angularVelocity{}; //in radians
	float angle{}; //in radians
	Vector3 normal{};

	void Recalculate();
	void Displace(double deltaTime);
	void ApplyCWForce(double deltaTime, const float timescale);
	void ApplyCCWForce(double deltaTime, const float timescale);
	bool isColliding = false;
	GameObject(Mesh* newMesh);
	~GameObject();
};
#endif

