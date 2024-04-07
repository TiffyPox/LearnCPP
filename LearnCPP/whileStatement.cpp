#include <iostream>
#include <vector>

int main()
{
    // A while statement repeatedly executes a target statement as long as a condition is true
    // the condition can be an expression or an initalized variable declaration
    // to prevent an infinite loop, the condition or the loop body must change the value of the expression

    std::vector<int> v;

    int i = 0;

    // read until end of file or other input failure
    while (std::cin >> i)
    {
        v.push_back(i);

        // find the first negative element
        auto beg = v.begin();

        while (beg != v.end() && *beg >= 0)
        {
            ++beg;

            std::cout << v[*beg];

            if (beg == v.end())
            {
                return 0;
            }
        }
    }
}