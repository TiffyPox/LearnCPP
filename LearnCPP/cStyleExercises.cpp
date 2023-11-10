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

    // Write a program to define three character arrays. Use the third one to hold the concatenation of the first two
    // using strcpy and strcat to copy the two arrays into the third
    char c1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char c2[7] = {' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    char full[255]{};

    std::strcat(c1, c2);
    std::strcpy(full, c1);

    std::cout << full << std::endl;

    // c_str indicates that the function returns a C-Style character string
    // it returns a pointer to the beginning of a null-terminated character array that holds the same data as the characters in the string
    std::string s("Tiffany");

    const char *str = s.c_str();

    std::cout << *str;
    
    return 0;
}