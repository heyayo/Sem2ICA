#include "Program.hpp"
#include <iostream>

#define print(message) std::cout << message
#define end << std::endl
#define endLine std::cout << std::endl
#define getInput(value) std::cin >> value
#define getWord(value) std::getline(std::cin, value)

PlayerTracker Program::game;
bool Program::running = true;
Program::command Program::commandBuffer = list;
Program::pair<std::string,Program::command> Program::commands[5] =
	{
		{"insert", insert},
		{"remove", remove},
		{"move", move},
		{"quit", quit},
		{"list", list}
	};

void Program::insert()
{
	print("Player Name?" end);
	std::string input{};
	getWord(input);
	print("Player Distance?" end);
	int distance = 0;
	getInput(distance);
	game.addPlayer(input,distance);
}

void Program::remove()
{
	print("Player Name?" end);
	std::string input{};
	getWord(input);
	game.removeByName(input);
}

void Program::move()
{
	print("Player Name?" end);
	std::string input{};
	getWord(input);
	print("Move By?" end);
	int delta = 0;
	getInput(delta);
	game.move(input,delta);
}

void Program::menu()
{
	print("Commands" end);
	print("insert" end);
	print("remove" end);
	print("move" end);
	print("quit" end);
	print("list" end);
	endLine;
}

void Program::query()
{
	print("Enter Command" end);
	std::string input{};
	getWord(input);
	
	for (auto& x : commands)
	{if (input == x.a) {commandBuffer = x.b; return;}}
	commandBuffer = list;
}

void Program::quit() {running = false;}
bool Program::shouldEnd() { return running; }
void Program::list() { game.list();endLine;game.debugPrint(); }
void Program::execute() { commandBuffer(); }

void Program::populate()
{
	game.addPlayer("Michael",3);
	game.addPlayer("Fass",4);
	game.addPlayer("Bender",5);
	game.addPlayer("Hugh",6);
	game.addPlayer("Jack",32);
	game.addPlayer("Man",15);
}

