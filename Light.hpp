#ifndef LIGHT_HPP
#define LIGHT_HPP
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>
#include "Vertex.h"
struct Light
{
	glm::vec3 position{0,20,0};
	Color color{1,1,1};
	float power{1};
	float C{1},L{.1f},Q{.001f};
};
#endif
