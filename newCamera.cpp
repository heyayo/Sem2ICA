#include "newCamera.hpp"
#include "ext/quaternion_geometric.hpp"

Camera::Camera()
{
}

Camera::~Camera() {}

void Camera::init(const glm::vec3& pos, const glm::vec3& target, const glm::vec3& up)
{
	this->position = pos;
	this->target = target;
	this->up = up;
}

void Camera::reset() {}

void Camera::update(double dt) {}

void Camera::Refresh()
{
	if (!re) return;

	glm::vec3 view = glm::normalize(target-position);
	glm::vec3 right = glm::normalize(glm::cross(up,view));

	up = glm::normalize(glm::cross(view,right));
	re = false;
}

