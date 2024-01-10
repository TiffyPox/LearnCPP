#include <iostream>
#include <vector>
#include <cstdlib>

void printVector(const std::vector<int>& v)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }
}

int main()
{
    std::vector<int> unsorted = { 7, 6, 3, 2, 1, 4, 0, 5 };
    std::vector<int> sorted = {};

    // split first half
    std::vector<int> n1;

    for (auto i = unsorted.begin(); i < unsorted.end() - 4; ++i)
    {
        int curr = *i;

        n1.push_back(curr);
    }

    printVector(n1);

    // split second half
    std::vector<int> n2;

    for (auto i = unsorted.begin() + 4; i < unsorted.end(); ++i)
    {
        int curr = *i;

        n2.push_back(curr);
    }

    std::cout << std::endl;

    printVector(n2);

    // merge sorted numbers

    return 0;
}