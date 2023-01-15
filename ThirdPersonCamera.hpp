#ifndef DXGL3D_THIRDPERSONCAMERA_HPP
#define DXGL3D_THIRDPERSONCAMERA_HPP

#include "newCamera.hpp"

class ThirdPersonCamera : public Camera
{
public:
    void update(double deltaTime);
    float zoomLevel = 1.f;

};


#endif
