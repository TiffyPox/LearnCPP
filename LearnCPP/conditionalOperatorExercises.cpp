#include <iostream>
#include <vector>

void doubleOdds(std::vector<int> &v)
{
    for (auto i = v.begin(); i < v.end(); ++i)
    {
        *i = (*i % 2 != 0) ? *i * 2 : *i;
    }
}

int main ()
{
    // write a program to use a conditional operator to find the elements in a vector<int>
    // find the elements that are odd numbers and double the value of each element
    
    std::vector<int> nums {2, 4, 6, 7, 9, 11};

    doubleOdds(nums);

    for (int i : nums)
    {
        std::cout << i << " ";
    }

    return 0;
}