#include <iostream>

int main()
{
    std::cout << "Give me a word" << std::endl;

    std::string input;

    std::cin >> input;

    for (size_t i = 0; i < input.length(); i++)
    {
        auto char1 = input[i];
        auto char2 = input[input.length() - 1 - i];

        if (char1 != char2)
        {
            std::cout << "That word is not a palindrome" << std::endl;

            return -1;
        }
    }
    
    std::cout << "That word is a palindrome!" << std::endl;
}