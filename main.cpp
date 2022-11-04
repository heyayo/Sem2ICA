#include "chainlinks.hpp"

#define print(x) std::cout << x;
#define end std::cout << std::endl;
#define input(x) std::cin >> x

static bool running = true;
static sdm::LinkedList<sdm::DNode,char> path;
static int playerpos = 0;
static sdm::DNode<char>* ppos;

void topbar()
{
	int i = 0;
	int j = 0;
	while (i < 20)
	{
		if (j > 9)
			j = 0;
		print(j);
		if (i < 19)
		{
			print('-');
		}
		++i;
		++j;
	}
	end;
	for (int k = 0; k < 39; ++k)
	{
		print('-');
	}
	end;
}

/*
void locate(const int rowe)
{
	int temp = playerpos;
	int prow = playerpos / 20;
	for (int i = 0; i < prow; ++i)
	{
		temp -= 20;
	}
	for (int i = 0; i < 20; ++i)
	{
		if (i == temp && prow == rowe)
		{
			print("^ ");
		}
		else
			print("  ");
	}
	end;
}

void pathing()
{
	auto curr = path.first();
	int row = 0;
	int rowc = 0;
	for (int i = 1; i < path.capacity(); ++i)
	{
		++row;
		print(curr->value());
		if (row < 20)
		{
			print('-');
		}
		else
		{
			end;
			locate(rowc);
			row = 0;
			++rowc;
		}
		curr = curr->next();
	}
	print(curr->value());
	end;
	locate(rowc);
}
*/

void locator(sdm::DNode<char>* curr)
{
	int row = 0;
	for (int i = 0; i < 20; ++i)
	{
		if (ppos == curr)
		{
			print("^ ");
		}
		else
		{
			print("  ");
		}
		if (curr->isTail())
			break;
		curr = curr->next();
	}
	end;
}

void drawPath()
{
	if (path.isEmpty())
		return;
	auto curr = path.first();
	auto start = path.first();
	int row = 0;
	for (int i = 1; i < path.capacity(); ++i)
	{
		++row;
		print(curr->value());
		if (row < 20)
		{
			print('-');
		}
		else
		{
			end;
			locator(start);
			start = curr->next();
			row = 0;
		}
		curr = curr->next();
	}
	print(curr->value());
	end;
	locator(start);
}

void help()
{
	print("1->QUIT, 2->LEFT, 3->RIGHT, 4->NEWNODE, 5->DELNODE, PATHSIZE->" << path.capacity());
	end;
}

void extend()
{
	if (path.isEmpty())
	{
		path.chainfront('S');
		ppos = path.first();
		return;
	}
	if (ppos->isHead() && ppos->isTail())
	{ path.chainat('S',ppos); }
	else
		path.chainat('w',ppos);
	if (ppos->next()->isTail())
	{
		ppos->value() = ppos->next()->value();
		ppos->next()->value() = 'E';
	}
}

void del()
{
	if (path.isEmpty())
		return;
	auto temp = ppos;
	if (path.capacity() == 1)
	{
		ppos = nullptr;
	}
	else if (ppos->isTail())
	{
		ppos = ppos->prev();
		ppos->value() = 'E';
		temp = path.last();
	}
	else if (ppos->isHead())
	{
		ppos = ppos->next();
		ppos->value() = 'S';
		temp = path.first();
	}
	else
		ppos = ppos->next();
	path.detach(temp);
}

void query()
{
	int input;
	input(input);
	switch (input)
	{
		case 1:
			running = false;
			break;
		case 2:
			if (ppos == nullptr)
				break;
			if (ppos->prev())
				ppos = ppos->prev();
			break;
		case 3:
			if (ppos == nullptr)
				break;
			if (ppos->next())
				ppos = ppos->next();
			break;
		case 4:
			extend();
			break;
		case 5:
			del();
			break;
		default:
			break;
	}
}

int main()
{
	path.chainback('S');
	for (int i = 0; i < 3; ++i)
	{
		path.chainback('o');
	}
	path.chainback('E');
	ppos = path.first();
	while (running)
	{
		topbar();
		drawPath();
		help();
		query();
		system("clear");
	}
}

