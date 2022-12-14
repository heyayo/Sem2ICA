#include "player.hpp"
#include "MyMath.h"

rBounded::rBounded(Mesh* giveMesh, radial newBounds)
: GameObject(giveMesh), bounds(newBounds)
{}

timedRBounded::timedRBounded(Mesh* giveMesh, radial newBounds, float live)
: rBounded(giveMesh,newBounds), lifetime(live) {}

qBounded::qBounded(Mesh* giveMesh, Quad newBounds)
	: GameObject(giveMesh), bounds(newBounds)
{}

timedQBounded::timedQBounded(Mesh* giveMesh, Quad newBounds, float live)
	: qBounded(giveMesh,newBounds), lifetime(live)
{}
