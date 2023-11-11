#include <array>
#include <iostream>
#include <vector>

void printArray(const std::array<int, 4> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << " ";
    }
}

void printVector(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
}

int main()
{
    // Write a program to initialize a vector from an array of ints

    int arr[4] = {2, 4, 6, 8};

    std::vector<int> vec(std::begin(arr), std::end(arr));

    vec[0] = 4;

    printVector(vec);

    // Write a program to copy a vector of ints into an array of ints

    std::array<int, 4> vec2 = {vec[0], vec[1], vec[2], vec[3]};

    vec2[0] = 2;

    printArray(vec2);

    return 0;
}