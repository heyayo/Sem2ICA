#ifndef SCENE_1_H
#define SCENE_1_H

#include "GameObject.h"
#include "Vector3.h"
#include "Scene.h"
#include "Mesh.h"
#include "MatrixStack.h"
#include "Camera.h"
#include <vector>

#define MAX_WALL 8

class Scene1 : public Scene
{
public:
	enum GEOMETRY_TYPE
	{
		GEO_AXES,
		GEO_SHIP,
		GEO_WALL,
		PROJECTILE,
		SLINGSHOT,
		TERRENCE,
		BACKGROUND,
		CUBE,
		NUM_GEOMETRY,
	};

	enum UNIFORM_TYPE
	{
		U_MVP = 0,
		U_COLOR_TEXTURE_ENABLED,
		U_COLOR_TEXTURE,
		U_TEXT_ENABLED,
		U_TEXT_COLOR,
		U_TOTAL,
	};

	Scene1();
	~Scene1();

	virtual void Init();
	virtual void Update(double dt);
	virtual void Render();
	virtual void Exit();

private:
	void HandleKeyPress();
	void RenderMesh(Mesh* mesh, bool enableLight);
	bool CheckLineCollision(GameObject* go1, GameObject* go2);
	void WallCollisionResponse(GameObject* go1, GameObject* go2);

	unsigned m_vertexArrayID;
	Mesh* meshList[NUM_GEOMETRY];

	unsigned m_programID;
	unsigned m_parameters[U_TOTAL];

	double deltaTime;
	float m_worldWidth;
	float m_worldHeight;
	bool bRButtonState;
	Camera camera;

	MS modelStack;
	MS viewStack;
	MS projectionStack;

	//Vector3 gravity;
	/*Vector3 temp, acc, force;
	Vector3 up, down, left, right;*/
	//Vector3 diff;
	/*bool slowdown;
	bool UPButton;
	float multiplier, distX, distY;
	Vector3 torque;
	float speed;*/

	Vector3 toss{};
	Vector3 terrenceSpawn{20,70,5};
	
	std::vector<GameObject*> characters;
	std::vector<GameObject*> physicsObjects;
	std::vector<GameObject*> sphericalObjects;
	std::vector<GameObject*> walls;
	
	GameObject* Slingshot;
	GameObject* terrence;
	void LaunchObject(GameObject& object, const Vector3& force);

	bool terrenceGravity = false;
	double timeSinceLaunch = 0;

	void reset();
};

#endif