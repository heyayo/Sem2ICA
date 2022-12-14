#include "GameObject.h"

struct rBounded : public GameObject
{
    radial bounds;
    rBounded(Mesh* giveMesh, radial newBounds);
};

struct timedRBounded : public rBounded
{
    float timeSinceAlive = 0;
    float lifetime;
    timedRBounded(Mesh* giveMesh, radial newBounds, float live);
};

struct qBounded : public GameObject
{
	Quad bounds;
	qBounded(Mesh* giveMesh, Quad newBounds);
};

struct timedQBounded : public qBounded
{
	float timeSinceAlive = 0;
	float lifetime;
	timedQBounded(Mesh* giveMesh, Quad newBounds, float live);
};
