#include "GameObject.h"

struct rBounded : public GameObject
{
    radial bounds;
    Vector3 force;
	float multiplier;

    void ActOn(float strength, float direction);
    rBounded(Mesh* giveMesh, radial newBounds);
};

struct timedRBounded : public rBounded
{
    float timeSinceAlive = 0;
    float lifetime;
    timedRBounded(Mesh* giveMesh, radial newBounds, float live);
};
