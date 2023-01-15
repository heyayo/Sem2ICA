#ifndef DATAA2_PLAYERTRACKER_HPP
#define DATAA2_PLAYERTRACKER_HPP

#include "minheap.hpp"
#include "player.hpp"

class PlayerTracker
{
    sdm::minheap<Player,50> heap;

public:

    void addPlayer(const std::string& name, int distance);
    void list();
    void removeByName(const std::string& name);
    void removeByDistance(const int& distance);
    void move(const std::string& name, int distance);
};


#endif
