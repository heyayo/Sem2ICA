#include "Program.hpp"

//#define EXAMPLE

int main()
{
#ifdef EXAMPLE
	// Populates the minheap with example players
	Program::populate();
#endif
	while (Program::shouldEnd())
	{
		Program::menu();
		Program::query();
#ifdef _WIN32
		system("CLS");
#elif __linux__
		system("clear");
#endif
		Program::execute();
	}
}
