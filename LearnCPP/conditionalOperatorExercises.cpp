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
    std::vector<int> nums {2, 4, 6, 7, 9, 11};

    doubleOdds(nums);

    for (int i : nums)
    {
        std::cout << i << " ";
    }

    return 0;
}