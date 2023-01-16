#ifndef MATRIXSTACK_HPP
#define MATRIXSTACK_HPP
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>
#include <stack>
class MatrixStack
{
	public:
	MatrixStack();
	~MatrixStack();
	const glm::mat4& Top() const;
	void PopMatrix();
	void PushMatrix();
	void Clear();
	void LoadIdentity();
	void LoadMatrix(const glm::mat4& matrix);
	void MultMatrix(const glm::mat4& matrix);
	void Rotate(float degrees, float axisX, float axisY, float axisZ);
	void Rotate(float degrees, glm::vec3 axis);
	void Scale(float scaleX, float scaleY, float scaleZ);
	void Scale(glm::vec3 scale);
	void Translate(float translateX, float translateY, float translateZ);
	void Translate(glm::vec3 diff);
	void Frustum(double left, double right, double bottom, double top, double near, double far);
	void LookAt(double eyeX, double eyeY, double eyeZ,
	double centerX, double centerY, double centerZ,
	double upX, double upY, double upZ);
	void LookAt(const glm::vec3& position, const glm::vec3& target, const glm::vec3& up);

private:
	std::stack<glm::mat4> ms;
};
#endif
