#include <iostream>

int main()
{
    std::cout << "Give me a word" << std::endl;

    bool palindrome = true;

    std::string input;

    while (getline(std::cin, input))
    {
        for (size_t i = 0; i < input.length(); i++)
        {
            auto char1 = input[i];
            auto char2 = input[input.length() - 1 - i];

            if (char1 != char2)
            {
                palindrome = false;
            }
            else
            {
                palindrome = true;
            }
        }

        if (palindrome == false)
        {
            std::cout << "That word is not a palindrome" << std::endl;
        }
        else
        {
            std::cout << "That word is a palindrome!" << std::endl;
        }
    }

    return 0;
}