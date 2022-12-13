#include "player.hpp"
#include "MyMath.h"

rBounded::rBounded(Mesh* giveMesh, radial newBounds)
: GameObject(giveMesh), bounds(newBounds)
{}

void rBounded::ActOn(float strength, float direction)
{
	auto radianDirection = Math::DegreeToRadian(direction);
    float x = sin(radianDirection)*strength;
    float y = cos(radianDirection)*strength;

    force = {x,y,0};
}

timedRBounded::timedRBounded(Mesh* giveMesh, radial newBounds, float live)
: rBounded(giveMesh,newBounds), lifetime(live) {}
