#ifndef GALAXY_HPP
#define GALAXY_HPP
#include "Scene.h"
#include "Mesh.h"
#include "AACam.hpp"
#include "MatrixStack.hpp"
class Galaxy : public Scene
{
public:
	enum GEOMETRY_TYPE
	{
		GEO_AXES,
		GEO_SUN,
		GEO_EARTH,
		GEO_MOON,
		GEO_CYLINDER,
		NUM_GEOMETRY,
	};

	enum UNIFORM_TYPE
	{
		U_MVP = 0,
		U_TOTAL,
	};

	Galaxy();
	~Galaxy();

	virtual void Init();
	virtual void Update(double dt);
	virtual void Render();
	virtual void Exit();

private:
	void HandleKeyPress();

	unsigned m_vertexArrayID;
	Mesh* meshList[NUM_GEOMETRY];

	unsigned m_programID;
	unsigned m_parameters[U_TOTAL];

	AACam camera;
	bool projType = 1;
	MatrixStack modelStack, viewStack, projectionStack;
	float earthRot = 0;
	float moonRot = 0;
};
#endif
