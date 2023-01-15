#include "PlayerTracker.hpp"

int main()
{
    {
        PlayerTracker game;

        game.addPlayer("McLovin",3);
        game.addPlayer("Michael",5);
        game.addPlayer("Fass",4);
        game.addPlayer("Bender",6);
        game.addPlayer("Hugh",12);
        game.addPlayer("Jack",13);
        game.addPlayer("Man",8);
        game.addPlayer("Bingo",7);
        game.addPlayer("Bango",9);
        game.addPlayer("Bish",15);
        game.addPlayer("Bash",24);
        game.addPlayer("Bosh",22);

        game.list();

        game.move("McLovin",20);

        game.list();
    }
}
