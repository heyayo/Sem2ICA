#ifndef DXGL3D_OBJECT_HPP
#define DXGL3D_OBJECT_HPP

#include "Mesh.h"
#include "glm/vec3.hpp"

class Object
{
    Mesh* mesh;
    glm::vec3 position{}, rotation{}, scaler{1,1,1};
    Object* parent = nullptr;

public:
    Object(Mesh* newmesh);
    Object(Mesh* newmesh, Object* p);
    ~Object();

    void move(const glm::vec3& distance);
    void move(const float& x, const float& y, const float& z);
    void rotate(const glm::vec3& rotate);
    void rotate(const float& x, const float& y, const float& z);
    void scale(const glm::vec3& scale);
    void scale(const float& x, const float& y, const float& z);
};


#endif
