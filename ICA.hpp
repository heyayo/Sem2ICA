#ifndef ICA_HPP
#define ICA_HPP
#include "Scene.h"
#include "Mesh.h"
#include "AACam.hpp"
#include "MatrixStack.hpp"
#include "Light.hpp"
class ICA : public Scene
{
public:
	enum GEOMETRY_TYPE
	{
		GEO_AXES,
		GEO_SPHERE,
		GEO_CYLINDER,
        GEO_CUBE,
		GEO_HALFSPHERE,
		GEO_CONE,
		GEO_FACESHIELD,
		GEO_LIGHT,
		NUM_GEOMETRY,
	};

	enum UNIFORM_TYPE
	{
		U_MVP = 0,
		U_MODELVIEW,
		U_MODELVIEW_INVERSE_TRANSPOSE,
		U_MATERIAL_AMBIENT,
		U_MATERIAL_DIFFUSE,
		U_MATERIAL_SPECULAR,
		U_MATERIAL_SHININESS,
		U_LIGHT0_POSITION,
		U_LIGHT0_COLOR,
		U_LIGHT0_POWER,
		U_LIGHT0_KC,
		U_LIGHT0_KL,
		U_LIGHT0_KQ,
		U_LIGHTENABLED,
		U_TOTAL,
	};

	ICA();
	~ICA();

	virtual void Init();
	virtual void Update(double dt);
	virtual void Render();
	virtual void Exit();

private:
	void HandleKeyPress(double dt);

	unsigned m_vertexArrayID;
	Mesh* meshList[NUM_GEOMETRY];

	unsigned m_programID;
	unsigned m_parameters[U_TOTAL];

	AACam camera;
	bool projType = 1;
	MatrixStack modelStack, viewStack, projectionStack;
	void RenderMesh(Mesh* mesh, bool enableLight = true);
	Light light[1];
	bool enableLight = true;
    glm::vec3 debugTranslate = {0,0,0};
    glm::vec3 debugRotationAxis = {1,1,1};
    glm::vec3 debugScale = {1,1,1};
    float debugRotation = 0;
    glm::vec3* debug = &debugTranslate;
};
#endif
