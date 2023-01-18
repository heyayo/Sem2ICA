#include "FPSCam.hpp"
#include "Input.hpp"
#include "MouseController.h"
#include "ext/matrix_transform.hpp"
#include <compare>

FPSCam::FPSCam() {}
FPSCam::~FPSCam() {}

void FPSCam::refresh()
{
	Camera::Refresh();
}

void FPSCam::reset()
{
    position = {0,0,0};
    target = {1,0,0};
}

void FPSCam::update(double deltaTime)
{
	static constexpr float ROTATE_SPEED = 10.f;
	static constexpr float ZOOM_SPEED = 10.f;

	glm::vec3 view = glm::normalize(target - position);
	glm::vec3 right = glm::normalize(glm::cross(view,up));

	auto inputinst = Input::GetInstance();
	auto mouseinst = MouseController::GetInstance();
    if (inputinst->IsKeyDown(GLFW_KEY_R))
    {
        auto extra = view * ZOOM_SPEED * static_cast<float>(deltaTime);
        position += extra;
        target += extra;
    }
    if (inputinst->IsKeyDown(GLFW_KEY_F))
    {
        auto extra = view * -ZOOM_SPEED * static_cast<float>(deltaTime);
        position += extra;
        target += extra;
    }
	if (inputinst->IsKeyDown(GLFW_KEY_W))
	{
		auto distance = target - position;
		position = target;
		target = position + distance;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_S))
	{
		auto distance = target - position;
		target = position;
		position = target - distance;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_D))
	{
		position += right;
		target += right;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_A))
	{
		position -= right;
		target -= right;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_E))
	{
		position += up;
		target += up;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_Q))
	{
		position -= up;
		target -= up;
	}
	double deltaX = mouseinst->GetMouseDeltaX();
	double deltaY = mouseinst->GetMouseDeltaY();
	float angle = -deltaX * ROTATE_SPEED * static_cast<float>(deltaTime);
	glm::mat4 yaw = glm::rotate(glm::identity<glm::mat4>(),glm::radians(angle),up);

	float pangle = deltaY * ROTATE_SPEED * static_cast<float>(deltaTime);
	right.y = 0;

	glm::mat4 pitch = glm::rotate(yaw,glm::radians(pangle),right);
	glm::vec3 rView = pitch * glm::vec4(view,0.f);
	target = position + rView;

	re = true;

	refresh();
}

void FPSCam::init(const glm::vec3& pos, const glm::vec3& target, const glm::vec3& up)
{
    Camera::init(pos, target, up);
}

