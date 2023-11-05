#include <iostream>
#include <array>

int main()
{
    // 
    int numbers[] = {10, 20};

    int a = numbers[0];
    int b = numbers[1];

    int *c = numbers;

    int *d = &numbers[1];

    c += d - c;

    std::cout << *c << std::endl;

    // Using pointers, set the elements in an array to zero

    std::array<int, 5> nums{ 1, 2, 3, 4, 5 };

    // print original array
    for (int i : nums)
    {
        std::cout << i << " " << std::endl;
    }

    for (auto p = nums.begin(); p != nums.end(); p++)
    {
        *p = 0;
    }

    // print new array
    for (int i : nums)
    {
        std::cout << i << " " << std::endl;
    }

    return 0;
}