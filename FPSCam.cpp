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
{}

void FPSCam::update(double deltaTime)
{
	static constexpr float ROTATE_SPEED = 100.f;
	static constexpr float ZOOM_SPEED = 10.f;

	glm::vec3 view = glm::normalize(target - position);
	glm::vec3 right = glm::normalize(glm::cross(view,up));

	auto inputinst = Input::GetInstance();
	auto mouseinst = MouseController::GetInstance();
	if (inputinst->IsKeyDown(GLFW_KEY_UP))
	{
		float angle = ROTATE_SPEED * static_cast<float>(deltaTime);

		glm::mat4 pitch = glm::rotate(glm::identity<glm::mat4>(),glm::radians(angle),right);
		glm::vec3 rView = pitch * glm::vec4(view,0.f);
		target = position + rView;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_DOWN))
	{
		float angle = -ROTATE_SPEED * static_cast<float>(deltaTime);

		glm::mat4 pitch = glm::rotate(glm::identity<glm::mat4>(),glm::radians(angle),right);
		glm::vec3 rView = pitch * glm::vec4(view,0.f);
		target = position + rView;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_W))
	{
		auto distance = target - position;
		position = target;
		target = position + distance;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_S))
	{
		auto distance = target - position;
		target = position;
		position = target - distance;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_D))
	{
		position += right;
		target += right;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_A))
	{
		position -= right;
		target -= right;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_E))
	{
		position += up;
		target += up;
		re = true;
	}
	if (inputinst->IsKeyDown(GLFW_KEY_Q))
	{
		position -= up;
		target -= up;
		re = true;
	}
	double deltaX = mouseinst->GetMouseDeltaX();
	double deltaY = mouseinst->GetMouseDeltaY();
	float angle = deltaY * ROTATE_SPEED * static_cast<float>(deltaTime);
	glm::mat4 yaw = glm::rotate(glm::identity<glm::mat4>(),glm::radians(angle),up);
	glm::vec3 yawView = yaw * glm::vec4(view,0.f);
	target = position + yawView;

	float pangle = deltaX * ROTATE_SPEED * static_cast<float>(deltaTime);
	right.y = 0;

	glm::mat4 pitch = glm::rotate(glm::identity<glm::mat4>(),glm::radians(angle),right);
	glm::vec3 rView = pitch * glm::vec4(view,0.f);
	target = position + rView;

	re = true;

	refresh();
}

void FPSCam::init(const glm::vec3& pos, const glm::vec3& target, const glm::vec3& up)
{
	Camera::Init(pos,target,up);
}

