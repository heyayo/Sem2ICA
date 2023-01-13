#include "minheap.hpp"
#include "player.hpp"

int main()
{
    sdm::minheap<Player,50> tree;

    tree.insert(new Player("Dave",10));
    tree.insert(new Player("Triss",12));
    tree.insert(new Player("Maldover",19));
    Player* toRemove = new Player("Mippy",16);
    tree.insert(toRemove);
    tree.insert(new Player("Ned",9));
    tree.insert(new Player("McLovin",3));
    tree.insert(new Player("McLovin",52));
    tree.insert(new Player("Michaels",52));

    std::cout << tree << std::endl;
    tree.debugPrint();
    tree.remove(toRemove);
    tree.debugPrint();
    std::cout << tree << std::endl;
    tree.remove(Player("McLovin"),[](Player* a, Player* b)->bool{return a->getName() == b->getName();});
    tree.debugPrint();
    std::cout << tree << std::endl;
    //system("PAUSE");
}
