#include <iostream>

int main()
{

    int number = 0;

    std::cout << "Please give me a positive number!" << std::endl;

    while (std::cin >> number)
    {
        // write an expression to determine whether a value (of type int) is odd or even
        const bool isEven = number != 0 && number % 2 == 0;

        if (number <= 0)
        {
            std::cout << "That is not a positive number" << std::endl;
            return -1;
        }

        // print result
        if (isEven)
        {
            std::cout << "That is an even number!" << std::endl;
        }
        else
        {
            std::cout << "That number is an odd number!" << std::endl;
        }
    }

    return 0;
}