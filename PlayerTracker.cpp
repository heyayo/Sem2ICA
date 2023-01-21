#include "PlayerTracker.hpp"

void PlayerTracker::addPlayer(const std::string &name, int distance){ heap.insert(new Player(name,distance)); }
void PlayerTracker::list(){ std::cout << heap << std::endl; }
void PlayerTracker::removeByName(const std::string &name)
{ heap.remove(Player(name),[](Player* a, Player* b){ return a->getName() == b->getName(); }); }
void PlayerTracker::removeByDistance(const int &distance)
{ heap.remove(Player(distance),[](Player* a, Player* b){ return a->getDistance() == b->getDistance(); }); }
void PlayerTracker::move(const std::string &name, int distance)
{
    int index = heap.Find(Player(name),[](Player* a, Player* b){ return a->getName() == b->getName(); });
	if (index < 0) return;
    heap[index].setDistance(heap[index].getDistance()+distance);
	heap.stabilize(index);
}

void PlayerTracker::debugPrint()
{
	heap.debugPrint();
}
