#include "ThirdPersonCamera.hpp"
#include "Input.hpp"
#include "MouseController.h"

void ThirdPersonCamera::init(glm::vec3 *target, float dist)
{
	looktarget = target;
	distance = dist;
	Camera::Init({1,0,0},{0,0,0},{0,1,0});
}

void ThirdPersonCamera::update(double deltaTime)
{
    static constexpr float ROTATE_SPEED = 10.f;

    glm::vec3 view = glm::normalize(*looktarget-position);
    glm::vec3 right = glm::normalize(glm::cross(view,up));

    auto inputinst = Input::GetInstance();
    auto mouseinst = MouseController::GetInstance();
    double deltaX = mouseinst->GetMouseDeltaX();
    double deltaY = mouseinst->GetMouseDeltaY();
    float angleX = -deltaX * ROTATE_SPEED * static_cast<float>(deltaTime);
    glm::mat4 yaw = glm::rotate(glm::identity<glm::mat4>(),glm::radians(angleX),up);
    float angleY = deltaY * ROTATE_SPEED * static_cast<float>(deltaTime);
    glm::mat4 pitch = glm::rotate(yaw, glm::radians(angleY), right);
    glm::mat4 final = glm::translate(pitch,{distance,0,0});

    glm::vec3 transform = final * glm::vec4(view,0.f);

    position = target + transform;
    re = true;
    Refresh();
}
