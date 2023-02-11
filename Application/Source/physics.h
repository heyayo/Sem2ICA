#pragma once

#include "GameObject.h"

bool CubeToCube(GameObject& cubeone, GameObject& cubetwo);
bool SphereToSphere(GameObject& sphereone, GameObject& spheretwo);
bool SphereToCube(const GameObject& sphere, const GameObject& cube);
void ElasticCollisionResponse(GameObject& a, GameObject& b);
