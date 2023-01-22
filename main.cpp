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
		//system("CLS");
		Program::execute();
	}
}
