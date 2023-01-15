#ifndef CAMERA_HPP
#define CAMERA_HPP
#include "glm.hpp"
#include "gtc/matrix_transform.hpp"
#include "gtc/type_ptr.hpp"

class Camera
{
	protected:
	void Refresh();
	bool re;

	public:
	glm::vec3 position;
	glm::vec3 target;
	glm::vec3 up;

	Camera();
	~Camera();
	
	void Init(const glm::vec3& pos, const glm::vec3& target, const glm::vec3& up);
	void Reset();
	void Update(double dt);
};

#endif