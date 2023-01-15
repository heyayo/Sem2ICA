#ifndef DATAA_PLAYER_HPP
#define DATAA_PLAYER_HPP

#include <string>
#include <iostream>

class Player
{
    std::string name;
    int distance;

public:
    Player(const std::string& newname, int dist);
    Player(const std::string& newname);
    Player(int dist);
    ~Player();

    const std::string& getName();
    const int& getDistance();

    void setName(const std::string& newname);
    void setDistance(const int& dist);

    bool operator<(const Player& other);
    bool operator==(const Player& other);
    friend std::ostream& operator<<(std::ostream& stream, const Player& other);
};

#endif