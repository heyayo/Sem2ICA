#ifndef MESH_BUILDER_H
#define MESH_BUILDER_H

#include "Mesh.h"
#include "Vertex.h"

/******************************************************************************/
/*!
		Class MeshBuilder:
\brief	Provides methods to generate mesh of different shapes
*/
/******************************************************************************/
class MeshBuilder
{
public:
	static Mesh* GenerateAxes(const std::string &meshName, float lengthX, float lengthY, float lengthZ);
	static Mesh* GenerateQuad(const std::string& meshName, Color color, float length = 1.f);
	static Mesh* GenerateCircle(const std::string& meshName, Color color, float radius = 1.f, int res = 64);
	static Mesh* GenerateSphere(const std::string& meshName, Color color, float radius = 1.f, int sliceres = 64, int stackres = 64);
	static Mesh* GenerateDonut(const std::string& meshName, Color color, float major = 1.f, float minor = 0.1f, int res = 64);
	static Mesh* GenerateCube(const std::string& meshName, Color color, float length = 1.f);
	static Mesh* GenerateCylinder(const std::string& meshName, Color color, unsigned res = 16, float depth = 1.f, float radius = 1.f);
	static Mesh* GenerateCone(const std::string& meshName, Color color, float res = 16, float depth = 1.f, float radius = 1.f);
	static Mesh* GenerateHemisphere(const std::string& meshName, Color color, float radius = 1.f, int sliceres = 64, int stackres = 64);
	static Mesh* LoadMesh(const std::string& filepath, const std::string& name = "LOADEDMESH");
    static Mesh* LoadMeshMTL(const std::string& filepath, const std::string& mtlpath, const std::string& name = "MLTMESH");
};

#endif
