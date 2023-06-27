#include <iostream>
#include <vector>

int main()
{
    // write a program to define an array of ten ints. Give each element the same value as its position in the array:
    
    constexpr size_t array_size = 10;

    int ia[array_size];

    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix;

        std::cout << ia[ix] << " ";
    }

    std::cout << std::endl;

    // Rewrite your program to use vectors:

    std::vector<int> numbers(10, 0);

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        numbers[i] = i;

        std::cout << numbers[i] << " ";
    }
    
    return 0;
}