#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "Mesh.h"
#include <vec3.hpp>
#include "MatrixStack.hpp"
#include <memory>
#include "MeshBuilder.h"
class Object
{
	std::unique_ptr<Mesh> mesh;
	MatrixStack transforms;
	std::weak_ptr<Object> parent;

public:
	~Object()
	{
		transforms.Clear();
	}
	void bindMesh(Mesh* newMesh)
	{
		mesh.reset(newMesh);
	}
	void setParent(std::shared_ptr<Object> p)
	{
		parent = p;
	}
	MatrixStack getTransforms()
	{
		MatrixStack temp;
		if (auto p = parent.lock())
			temp.LoadMatrix(p->getTransforms().Top());
		else
			temp.LoadIdentity();
		temp.MultMatrix(transforms.Top());
	}
};
#endif
