#ifndef AACAM_HPP
#define AACAM_HPP
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

class AACam
{
	float phi,theta,distance;
	bool recalc;
	void refresh();

	public:
	AACam();
	~AACam();

	glm::vec3 position, target, up;

	void init(float phi, float theta, float distance);
	void reset();
	void update(double delta);
};
#endif
