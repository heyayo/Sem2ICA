#ifndef DXGL3D_THIRDPERSONCAMERA_HPP
#define DXGL3D_THIRDPERSONCAMERA_HPP

#include "newCamera.hpp"

class ThirdPersonCamera : public Camera
{
public:
	float distance;
	glm::vec3* looktarget;
	void init(glm::vec3* target, float dist);
    void update(double deltaTime) override;

};


#endif
