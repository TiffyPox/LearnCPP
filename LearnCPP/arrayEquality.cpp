#include <iostream>
#include <array>

void iterateArray(std::array<int, 3> arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        int curr = *i;

        if (i != arr.end() - 1)
        {
            std::cout << curr << " "; 
        }
        else
        {
            std::cout << curr << std::endl;
        }
    }
}

int main()
{
    // Write a program to compare two arrays for equality

    std::array <int, 3> a{ 1, 2, 3 };
    std::array <int, 3> b{ 1, 2, 7 };
    
    iterateArray(a);
    iterateArray(b);

    if (a != b)
    {
        std::cout << "Arrays are not equal" << std::endl;
    }
    else
    {
        std::cout << "\nArrays are equal" << std::endl;
    }

    return 0;
}