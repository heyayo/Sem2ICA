#ifndef DXGL3D_ICAA_HPP
#define DXGL3D_ICAA_HPP

#include "Scene.h"
#include "Mesh.h"
#include "FPSCam.hpp"
#include "MatrixStack.hpp"
#include "Light.hpp"
#include "Object.hpp"
#include "ThirdPersonCamera.hpp"

class ICAA : public Scene
{

public:
    enum GEOMETRY_TYPE
    {
        GEO_AXES,
        GEO_SPHERE,
        GEO_CUBE,
        GEO_PLANE,
        GEO_LEFT,
        GEO_RIGHT,
        GEO_TOP,
        GEO_BOTTOM,
        GEO_FRONT,
        GEO_BACK,
        GEORALD,
        SKYSPHERE,
        HOUSE,
		TEXT,
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
        U_LIGHT0_TYPE,
        U_LIGHT0_POSITION,
        U_LIGHT0_COLOR,
        U_LIGHT0_POWER,
        U_LIGHT0_KC,
        U_LIGHT0_KL,
        U_LIGHT0_KQ,
        U_LIGHT0_SPOTDIRECTION,
        U_LIGHT0_COSCUTOFF,
        U_LIGHT0_COSINNER,
        U_LIGHT0_EXPONENT,
        U_NUMLIGHTS,
        U_COLOR_TEXTURE_ENABLED,
        U_COLOR_TEXTURE,
        U_LIGHTENABLED,
		U_TEXT_ENABLED,
		U_TEXT_COLOR,
        U_TOTAL,
    };

    ICAA();

    explicit ICAA(const MatrixStack &modelStack);

    ~ICAA();

    virtual void Init();
    virtual void Update(double dt);
    virtual void Render();
    virtual void Exit();

private:
    void HandleKeyPress();
    void HandleMouseInput();
    void RenderMesh(Mesh* mesh, bool enableLight);
    void RenderSkybox();
    void RenderGUI(Mesh* mesh, float x, float y, float scalex, float scaley);
	void RenderText(Mesh* mesh, const std::string& text, Color color);
	void RenderTextOnScreen(Mesh* mesh,	const std::string& text, Color color, float size, float x, float y);

    unsigned m_vertexArrayID;
    Mesh* meshList[NUM_GEOMETRY];

    unsigned m_programID;
    unsigned m_parameters[U_TOTAL];

	float fps = 0;

    FPSCam camera;
    ThirdPersonCamera cameratwo;
	glm::vec3 camtarget{};
    int projType = 1; // fix to 0 for orthographic, 1 for projection

    MatrixStack modelStack, viewStack, projectionStack;

    static const int NUM_LIGHTS = 1;
    Light light[NUM_LIGHTS];
    bool enableLight;
};

#endif
