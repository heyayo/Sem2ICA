#ifndef SCENE_1_H
#define SCENE_1_H

#include "player.hpp"
#include "Vector3.h"
#include "Scene.h"
#include "Mesh.h"
#include "MatrixStack.h"
#include "Camera.h"
#include <algorithm>
#include <vector>
#include <queue>
#include <memory>

class Scene1 : public Scene
{
public:
	enum GEOMETRY_TYPE
	{
		GEO_AXES,
		GEO_TEXT,
		GEO_BALL,
		GEO_CUBE,
		NUM_GEOMETRY,
	};

	enum UNIFORM_TYPE
	{
		U_MVP = 0,
		U_TOTAL,
	};

	enum WaveType
	{
		GRID,
		CORNERFAN,
		DIRECT,
		CENTER,
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
	void BorderCollision(GameObject& a);
	void Wave();
	void ResetGame();

	unsigned m_vertexArrayID;
	Mesh* meshList[NUM_GEOMETRY];

	unsigned m_programID;
	unsigned m_parameters[U_TOTAL];

	float m_worldWidth;
	float m_worldHeight;
	std::unique_ptr<rBounded> player;
	int playerLives = 5;
	std::vector<std::unique_ptr<timedRBounded>> projectiles;
	std::vector<std::unique_ptr<timedQBounded>> quadProjectiles;
	std::queue<WaveType> waves;
	float waveTime;
	float waveFrequency = 5;

	Camera camera;

	MS modelStack;
	MS viewStack;
	MS projectionStack;

	//Vector3 gravity;
	Vector3 temp, acc, force;
	float multiplier;
};

#endif
