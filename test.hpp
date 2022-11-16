#ifndef TEST
#define TEST
#include "Object.hpp"
#include "Actor.hpp"
struct test : public Actor
{
	Object base;
	Object seg1;
	Object seg2;

	void start() override;
	void update() override;
};
#endif
