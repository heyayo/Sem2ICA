#include "player.hpp"

rBounded::rBounded(Mesh* giveMesh, radial newBounds)
: GameObject(giveMesh), bounds(newBounds)
{}

void rBounded::ActOn(float strength, float direction)
{
    float x = sin(direction)*strength;
    float y = cos(direction)*strength;
    force = {x,y,0};
}

timedRBounded::timedRBounded(Mesh* giveMesh, radial newBounds, float live)
: rBounded(giveMesh,newBounds), lifetime(live) {}
