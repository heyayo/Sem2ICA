#ifndef DATAA_PLAYER_HPP
#define DATAA_PLAYER_HPP

#include <string>
#include <iostream>

class Player
{
    std::string name;
    int distance;

public:
    Player(const std::string& newname, float dist);
    Player(const std::string& newname);
    Player(float dist);
    ~Player();

    const std::string& getName();
    const int& getDistance();

    bool operator<(const Player& other);
    bool operator==(const Player& other);
    friend std::ostream& operator<<(std::ostream& stream, const Player& other);
};

#endif