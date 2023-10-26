#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    std::cout << "Write a sentence of your choice, include punctuation!" << std::endl;

    std::string input;

    char output = '*';

    while (getline(std::cin, input))
    {
        for (size_t i = 0; i != input.size(); i++)
        {
            if (!ispunct(input[i]))
            {
                input[i] = output;
            }
        }

        std::cout << input << std::endl;
    }

    return 0;
}