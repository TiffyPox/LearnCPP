#include <iostream>

bool checkPalindrome (std::string s)
{
    auto a = s.length();

    for (size_t i = 0; i < a; i++)
    {
        if (s[i] != s[a - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::cout << "Give me a word:" <<std::endl;

    std::string input;

    while (getline(std::cin, input))
    {
        if (checkPalindrome(input))
        {
            std::cout << "That's a palindrome!" << std::endl;
        }
        else
        {
            std::cout << "Not a palindrome!" << std::endl;
        }
    }

    return 0;
}