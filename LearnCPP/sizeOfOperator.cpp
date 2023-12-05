#include <iostream>
#include <string>

struct Player 
{
    std::string name = {};
    int level = 0;
};

int main ()
{
    // the sizeOf operator returns the size, in bytes, of an expression or a type name

    Player playerOne;
    Player *p;

    sizeof(Player); // size required to hold an object of type Player
    sizeof playerOne; // size of playerOne's type, i.e. sizeof(Player)
    sizeof p; // size of a pointer
    sizeof *p; // size of the type to which p points, i.e. sizeof(Player)
    sizeof playerOne.level; // size of the type of Player's level member
    sizeof Player::level; // alternative way to get the size of level

    std::cout << sizeof playerOne.level; // prints 4, the int type has a size of four bytes

    return 0;
}