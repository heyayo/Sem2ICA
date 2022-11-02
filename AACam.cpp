#include "AACam.hpp"
#include "Input.hpp"
#include "detail/qualifier.hpp"
#include "geometric.hpp"
#include "trigonometric.hpp"
#include <GLFW/glfw3.h>

AACam::AACam() {}
AACam::~AACam() {}

void AACam::init(float phi, float theta, float distance)
{
	this->phi = phi;
	this->theta = theta;
	this->distance = distance;
	this->recalc = true;

	refresh();
}

void AACam::reset()
{
}

void AACam::update(double delta)
{
	static const float ROTATE_SPEED = 100.0f;
	static const float ZOOM_SPEED = 10.0f;

	auto i = Input::GetInstance();
	if (i->IsKeyDown(GLFW_KEY_LEFT))
	{
		theta += ROTATE_SPEED * static_cast<float>(delta);
		recalc = true;
	}
	else if (i->IsKeyDown(GLFW_KEY_RIGHT))
	{
		theta -= ROTATE_SPEED * static_cast<float>(delta);
		recalc = true;
	}
	else if (i->IsKeyDown(GLFW_KEY_UP))
	{
		phi += ROTATE_SPEED * static_cast<float>(delta);
		recalc = true;
	}
	else if (i->IsKeyDown(GLFW_KEY_DOWN))
	{
		phi -= ROTATE_SPEED * static_cast<float>(delta);
		recalc = true;
	}
	else if (i->IsKeyDown(GLFW_KEY_W))
	{
		distance -= ZOOM_SPEED * static_cast<float>(delta);
		recalc = true;
	}
	else if (i->IsKeyDown(GLFW_KEY_S))
	{
		distance += ZOOM_SPEED * static_cast<float>(delta);
		recalc = true;
	}
	refresh();
}

void AACam::refresh()
{
	if (!recalc) return;

	float x = distance * cosf(glm::radians(phi)) * cosf(glm::radians(theta));
	float y = distance * sinf(glm::radians(phi));
	float z = distance * cosf(glm::radians(phi)) * sinf(glm::radians(theta));
	position = glm::vec3(x,y,z);
	target = {};
	glm::vec3 view = glm::normalize(position - target);
	glm::vec3 right = glm::normalize(glm::cross(view, glm::vec3(0.f,1.f,0.f)));
	up = glm::normalize(glm::cross(right, view));
	recalc = false;
}

