#include "player.hpp"

Player::Player(const std::string &newname, float dist) : name(newname), distance(dist) {}
Player::Player(const std::string &newname) : name(newname), distance(0) {}
Player::Player(float dist) : name(""), distance(dist) {}
Player::~Player() {}

bool Player::operator<(const Player& other)
{
    return distance < other.distance;
}

bool Player::operator==(const Player &other)
{
    return (name == other.name || distance == other.distance);
}

std::ostream& operator<<(std::ostream& stream, const Player& other)
{
    stream << other.name << " | " << other.distance;
    return stream;
}

const std::string &Player::getName()
{
    return name;
}

const int &Player::getDistance()
{
    return distance;
}
