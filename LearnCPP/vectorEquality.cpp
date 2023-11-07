#include <vector>
#include <iostream>

int main()
{
    // Write a program to check two vectors for equality

    std::vector<int> n { 1, 2, 3, 4, 5 };
    std::vector<int> n1 { 1, 2, 3, 4, 6 };

    if (n != n1)
    {
        std::cout << "Vectors are not equal" << std::endl;
    }
    else
    {
        std::cout << "Vectors are equal" << std::endl;
    }

    return 0;
}