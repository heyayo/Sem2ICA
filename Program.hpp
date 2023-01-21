#ifndef DATAA2_PROGRAM_HPP
#define DATAA2_PROGRAM_HPP

#include "PlayerTracker.hpp"

class Program
{
	typedef void(*command)();
	template<typename first, typename second>
	struct pair
	{
		first a;
		second b;
	};
	static bool running;
	
	static void insert();
	static void remove();
	static void move();
	static void list();
	static void quit();
	
	static PlayerTracker game;
	static pair<std::string,command> commands[5];
	static command commandBuffer;
	
public:
	static void populate();
	static bool shouldEnd();
	static void menu();
	static void query();
	static void execute();
};


#endif
