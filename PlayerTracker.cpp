#include "PlayerTracker.hpp"

void PlayerTracker::addPlayer(const std::string &name, int distance){ heap.insert(new Player(name,distance)); }
void PlayerTracker::list(){ std::cout << heap << std::endl; }
void PlayerTracker::removeByName(const std::string &name)
{ heap.remove(Player(name),[](Player* a, Player* b){ return a->getName() == b->getName(); }); }
void PlayerTracker::move(const std::string &name, int distance)
{
    int index = heap.Find(Player(name),[](Player* a, Player* b){ return a->getName() == b->getName(); });
	if (index < 0) return;
	int oldDistance = heap[index]->getDistance();
    heap[index]->setDistance(heap[index]->getDistance()+distance);
	if (heap.DuplicateCheck(index))
	{
		heap[index]->setDistance(oldDistance);
		return;
	}
	heap.stabilize(index);
}

void PlayerTracker::debugPrint()
{
	heap.debugPrint();
}
