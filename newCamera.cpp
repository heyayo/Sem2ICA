#include "newCamera.hpp"

Camera::Camera()
{
}

Camera::~Camera() {}

void Camera::Init(const glm::vec3& pos, const glm::vec3& target, const glm::vec3& up)
{
	this->position = pos;
	this->target = target;
	this->up = up;
}

void Camera::Reset() {}

void Camera::Update(double dt) {}

