#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "Mesh.h"
#include <vec3.hpp>
#include "MatrixStack.hpp"
#include <memory>
#include "MeshBuilder.h"
struct Object
{
	std::shared_ptr<Mesh> mesh;
	glm::vec3 position;
	MatrixStack transforms;

	virtual void start() = 0;
	virtual void update() = 0;
	void render()
	{
		glm::mat4 MVP, modelView, inverse;
		
	}
};
#endif
