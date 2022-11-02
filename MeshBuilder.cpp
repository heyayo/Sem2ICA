#include "MeshBuilder.h"
#include "GL/glew.h"
#include "Vertex.h"
#include "gtc/constants.hpp"
#include <vector>
#include "glm.hpp"

/******************************************************************************/
/*!
\brief
Generate the vertices of a reference Axes; Use red for x-axis, green for y-axis, blue for z-axis
Then generate the VBO/IBO and store them in Mesh object

\param meshName - name of mesh
\param lengthX - x-axis should start at -lengthX / 2 and end at lengthX / 2
\param lengthY - y-axis should start at -lengthY / 2 and end at lengthY / 2
\param lengthZ - z-axis should start at -lengthZ / 2 and end at lengthZ / 2

\return Pointer to mesh storing VBO/IBO of reference axes
*/
/******************************************************************************/
Mesh* MeshBuilder::GenerateAxes(const std::string &meshName, float lengthX, float lengthY, float lengthZ)
{
	Vertex v;
	std::vector<Vertex> vertex_buffer_data;
	std::vector<GLuint> index_buffer_data;

	//x-axis
	v.pos.Set(-lengthX, 0, 0);	v.color.Set(1, 0, 0);	vertex_buffer_data.push_back(v);
	v.pos.Set(lengthX, 0, 0);	v.color.Set(1, 0, 0);	vertex_buffer_data.push_back(v);
	//y-axis
	v.pos.Set(0, -lengthY, 0);	v.color.Set(0, 1, 0);	vertex_buffer_data.push_back(v);
	v.pos.Set(0, lengthY, 0);	v.color.Set(0, 1, 0);	vertex_buffer_data.push_back(v);
	//z-axis
	v.pos.Set(0, 0, -lengthZ);	v.color.Set(0, 0, 1);	vertex_buffer_data.push_back(v);
	v.pos.Set(0, 0, lengthZ);	v.color.Set(0, 0, 1);	vertex_buffer_data.push_back(v);

	index_buffer_data.push_back(0);
	index_buffer_data.push_back(1);
	index_buffer_data.push_back(2);
	index_buffer_data.push_back(3);
	index_buffer_data.push_back(4);
	index_buffer_data.push_back(5);

	Mesh *mesh = new Mesh(meshName);

	glBindBuffer(GL_ARRAY_BUFFER, mesh->vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, vertex_buffer_data.size() * sizeof(Vertex), &vertex_buffer_data[0], GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->indexBuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, index_buffer_data.size() * sizeof(GLuint), &index_buffer_data[0], GL_STATIC_DRAW);

	mesh->indexSize = index_buffer_data.size();
	mesh->mode = Mesh::DRAW_LINES;

	return mesh;
}

/******************************************************************************/
/*!
\brief
Generate the vertices of a quad; Use random color for each vertex
Then generate the VBO/IBO and store them in Mesh object

\param meshName - name of mesh
\param lengthX - width of quad
\param lengthY - height of quad

\return Pointer to mesh storing VBO/IBO of quad
*/
/******************************************************************************/
Mesh* MeshBuilder::GenerateQuad(const std::string &meshName, Color color, float length)
{
	Vertex v;
	std::vector<Vertex> vertex_buffer_data;
	std::vector<GLuint> index_buffer_data;

	// Add the vertices here
	v.pos.Set(0.5f * length, -0.5f * length, 0.f);	vertex_buffer_data.push_back(v); //v3
	v.pos.Set(0.5f * length, 0.5f * length, 0.f);	vertex_buffer_data.push_back(v); //v0
	v.pos.Set(-0.5f * length, 0.5f * length, 0.f);	vertex_buffer_data.push_back(v); //v1
	v.pos.Set(-0.5f * length, -0.5f * length, 0.f);	vertex_buffer_data.push_back(v); //v2

	//tri1
	index_buffer_data.push_back(0);
	index_buffer_data.push_back(1);
	index_buffer_data.push_back(2);
	//tri2
	index_buffer_data.push_back(0);
	index_buffer_data.push_back(2);
	index_buffer_data.push_back(3);

	// Create the new mesh
	Mesh* mesh = new Mesh(meshName);

	glBindBuffer(GL_ARRAY_BUFFER, mesh->vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, vertex_buffer_data.size() * sizeof(Vertex), &vertex_buffer_data[0], GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->indexBuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, index_buffer_data.size() * sizeof(GLuint), &index_buffer_data[0], GL_STATIC_DRAW);

	mesh->indexSize = index_buffer_data.size();
	mesh->mode = Mesh::DRAW_TRIANGLES;

	return mesh;
}

Mesh* MeshBuilder::GenerateCircle(const std::string &meshName, Color color, float radius, int res)
{
	Vertex v;
	std::vector<Vertex> vbuf;
	std::vector<GLuint> ibuf;
	
	float anglePerSlice = glm::two_pi<float>() / res;

	v.pos.Set(0,0,0);
	v.color.Set(color.r, color.g, color.b);
	vbuf.push_back(v);

	for (int i  = 1; i <= res + 1; ++i)
	{
		float theta = (i - 1) * anglePerSlice;
		v.pos.Set(radius * cosf(theta), 0, radius * sinf(theta));
		v.color.Set(color.r, color.g, color.b);

		vbuf.push_back(v);
	}
	for (int i = 1; i <= res + 1; ++i)
	{
		ibuf.push_back(i);
		ibuf.push_back(0);
	}
	Mesh* mesh = new Mesh(meshName);

	glBindBuffer(GL_ARRAY_BUFFER, mesh->vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, vbuf.size() * sizeof(Vertex), &vbuf[0], GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->indexBuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, ibuf.size() * sizeof(GLuint), &ibuf[0], GL_STATIC_DRAW);

	mesh->indexSize = ibuf.size();
	mesh->mode = Mesh::DRAW_TRIANGLE_STRIP;
	
	return mesh;
}

Mesh* MeshBuilder::GenerateSphere(const std::string& meshName, Color color, float radius, int sliceres, int stackres)
{
	Vertex v;
	std::vector<Vertex> vbuf;
	std::vector<GLuint> ibuf;

	float degPerStack = glm::pi<float>() / stackres;
	float degPerSLice = glm::two_pi<float>() / sliceres;

	for (int stack = 0; stack < stackres + 1; ++ stack)
	{
		float phi = -glm::half_pi<float>() + stack * degPerStack;
		for (int slice = 0; slice < sliceres + 1; ++slice)
		{
			float theta = slice * degPerSLice;
			v.pos.Set(radius * cos(phi) * cos(theta),
					radius * sin(phi),
					radius * cos(phi) * sin(theta));
			v.color.Set(color.r, color.g, color.b);
			vbuf.push_back(v);
		}
	}
	for (int i = 0; i < stackres; ++i)
	{
		for (int j = 0; j < sliceres + 1; ++j)
		{
			ibuf.push_back((stackres+1) * i + j);
			ibuf.push_back((sliceres+1) * (i + 1) + j);
		}
	}

	Mesh* mesh = new Mesh(meshName);

	glBindBuffer(GL_ARRAY_BUFFER, mesh->vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, vbuf.size() * sizeof(Vertex), &vbuf[0], GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->indexBuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, ibuf.size() * sizeof(GLuint), &ibuf[0], GL_STATIC_DRAW);

	mesh->indexSize = ibuf.size();
	mesh->mode = Mesh::DRAW_TRIANGLE_STRIP;
	
	return mesh;
}

Mesh* MeshBuilder::GenerateDonut(const std::string& meshName, Color color, float major, float minor, int res)
{
	Vertex v;
	std::vector<Vertex> vbuf;
	std::vector<GLuint> ibuf;

	float degPerStack = glm::two_pi<float>() / res;
	float degPerSlice = glm::two_pi<float>() / res;

	for (int i = 0; i < res + 1; ++i)
	{
		float phi = i * degPerStack;
		for (int j = 0; j < res + 1; ++j)
		{
			float theta = j * degPerSlice;
			v.pos.Set((major + minor * cos(theta)) * sin(phi),
					minor * sin(theta),
					(major + minor * cos(theta)) * cos(phi));
			v.color.Set(color.r,color.g,color.b);
			vbuf.push_back(v);
		}
	}

	for (int i = 0; i < res; ++i)
	{
		for (int j = 0; j <= res + 1; ++j)
		{
			ibuf.push_back((res+1) * i + j);
			ibuf.push_back((res+1) * (i + 1) + j);
		}
	}

	Mesh* mesh = new Mesh(meshName);

	glBindBuffer(GL_ARRAY_BUFFER, mesh->vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, vbuf.size() * sizeof(Vertex), &vbuf[0], GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->indexBuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, ibuf.size() * sizeof(GLuint), &ibuf[0], GL_STATIC_DRAW);

	mesh->indexSize = ibuf.size();
	mesh->mode = Mesh::DRAW_TRIANGLE_STRIP;
	
	return mesh;
}

