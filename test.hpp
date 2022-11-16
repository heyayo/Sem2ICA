#ifndef TEST
#define TEST
#include "Object.hpp"
struct test : public Object
{
	void start() override;
	void update() override;
};
#endif
