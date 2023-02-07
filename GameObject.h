#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include "Vector3.h"
struct GameObject
{
	enum GAMEOBJECT_TYPE
	{
		GO_NONE = 0,
		GO_TEXT,
		GO_BALL,
		GO_CUBE,
		GO_BULLET,
		GO_ALIEN,  // aliens
		GO_TOTAL, //must be last
	};
	GAMEOBJECT_TYPE type;
	Vector3 pos;
	Vector3 vel;
	Vector3 scale;
	bool active;
	float mass;

    Vector3 direction;
    float angularVelocity;
    float momentInertia;

	//add in the class variables required

	GameObject(GAMEOBJECT_TYPE typeValue = GO_BALL);
	~GameObject();
};
#endif

