#ifndef FPSCAM_HPP
#define FPSCAM_HPP

#include "newCamera.hpp"

class FPSCam : public Camera
{
	void refresh();

public:
	FPSCam();
	~FPSCam();

	void init(const glm::vec3& pos, const glm::vec3& target, const glm::vec3& up = {0.f,1.f,0.f}) override;
	void reset() override;
	void update(double deltaTime) override;
};

#endif
