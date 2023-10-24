#include <iostream>

struct player
{
	std::string name;
    int health = 0;
    bool alive = true;

    void printValues()
    {
        std::cout << "Player name: " << name << "\nPlayer health: " << health << std::endl;
    }
};

int main()
{
    player playerOne;

    std::cout << "Welcome Adventurer! What's your name?" << std::endl;

    std::cin >> playerOne.name;

    std::cout << "Hello, " << playerOne.name << "\nPlease pick a number between 1-100:" << std::endl;

    std::cin >> playerOne.health;

    playerOne.printValues();

    return 0;
}