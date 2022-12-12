#include "GameObject.h"

struct Bullet : public GameObject
{
    radial bounds;
    Bullet(Mesh* giveMesh);
};
