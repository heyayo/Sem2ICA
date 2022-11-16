#ifndef ACTOR_HPP
#define ACTOR_HPP
struct Actor
{
	virtual void start() = 0;
	virtual void update() = 0;
};
#endif