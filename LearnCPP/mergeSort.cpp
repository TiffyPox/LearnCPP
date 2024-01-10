#include <iostream>
#include <vector>
#include <cstdlib>

void printVector(const std::vector<int>& v)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.end() - 1)
        {
            std::cout << *it << " ";
        }
        else
        {
            std::cout << *it << std::endl;
        }
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

    printVector(n2);

    std::vector<int> firstHalf = {};
    std::vector<int> secondHalf = {};

    // get first half
    for (auto i = n1.begin(); i < n1.end() - 2; ++i)
    {
        int curr = *i;

        firstHalf.push_back(curr);
    }

    // get second half
    for (auto i = n1.begin() + 2; i < n1.end(); ++i)
    {
        int curr = *i;

        secondHalf.push_back(curr);
    }

    printVector(firstHalf);
    printVector(secondHalf);

    // sort first half
    // TO DO: make this into a reusable function
    int firstHalfLeft = firstHalf[0];
    int secondHalfLeft = secondHalf[0];

    std::vector<int> temp = {};

    if (firstHalfLeft > secondHalfLeft)
    {
        temp.push_back(secondHalfLeft);
    }

    firstHalfLeft = firstHalf[0];
    secondHalfLeft = secondHalf[1];

    if (firstHalfLeft > secondHalfLeft)
    {
        temp.push_back(secondHalfLeft);
    }

    printVector(temp);

    // merge sorted numbers

    return 0;
}