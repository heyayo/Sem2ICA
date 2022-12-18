#include "GameObject.h"

template<class BOUNDS>
struct boundedObject : public GameObject
{
    BOUNDS bounds;
    boundedObject(Mesh* giveMesh, BOUNDS newBounds) : GameObject(giveMesh), bounds(newBounds) {}
};

template<class BOUNDS>
struct timedBoundedObject : public boundedObject<BOUNDS>
{
    float timeSinceAlive = 0;
    float lifetime;
    timedBoundedObject(Mesh* giveMesh, BOUNDS newBounds, float life) : boundedObject<BOUNDS>(giveMesh, newBounds), lifetime(life) {}
};
