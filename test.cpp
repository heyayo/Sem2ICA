#include "test.hpp"
#include "Input.hpp"

void test::start()
{
	position = {0,0,0};
	mesh.reset(MeshBuilder::GenerateCone("testobject",{1,1,1}));
}

void test::update()
{

}

