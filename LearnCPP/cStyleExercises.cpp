#include <cstring>
#include <iostream>
#include <string>

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // points to the first value in ca
    const char *cp = ca;

    while (*cp)
    {
        std::cout << *cp << std::endl;
        cp++;
    }

    // Write a program to compare two strings

    std::string first = {"Hello Github"};
    std::string second = {"Hello Twitter"};

    if (first.size() > second.size())
    {
        std::cout << "\"" << first << "\" is greater than \"" << second << "\"" << std::endl;
    }
    else if (first.size() == second.size())
    {
        std::cout << "\"" << first << "\" and \"" << second << "\" are equal!" << std::endl;
    }
    else
    {
        std::cout << "\"" << second << "\" is greater than \"" << first << "\"" << std::endl;
    }

    // Write a program to compare two c-style strings

    char p1[6] = {'M', 'a', 'r', 'i', 'o', '\0'};
    char p2[6] = {'L', 'u', 'i', 'g', 'i', '\0'};

    int result = std::strcmp(p1, p2);

    if (result == 0)
    {
        std::cout << "Player names are equal!" << std::endl;
    }
    else
    {
        std::cout << "Player names are not equal" << std::endl;

        if (result > 0)
        {
            std::cout << p1 << " is greater than " << p2 << std::endl;
        }
        else
        {
            std::cout << p2 << " is greater than " << p1 << std::endl;
        }
    }
    
    return 0;
}