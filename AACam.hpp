#ifndef AACAM_HPP
#define AACAM_HPP
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

class AACam
{
	float phi,theta,distance;
	float fov = 90.f,
		ratio = 16.f/9.f,
		nearcull = 0.1f,
		farcull = 1000.f;
	bool recalc;
	void refresh();

	public:
	AACam();
	~AACam();

	glm::vec3 position, target, up;
	glm::mat4 view, projection;

	void init(float phi, float theta, float distance);
	void reset();
	void update(double delta);
};
#endif
