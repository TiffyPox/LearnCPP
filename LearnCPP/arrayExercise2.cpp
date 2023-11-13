#include <array>
#include <iostream>

int main()
{
    // using a range for
    size_t cnt = 0;

    int ia[2] [3];

    for (auto &row : ia) // for every element in the outer array
    {
        for (auto &col : row) // for every element in the inner array
        {
            col = cnt;
            std::cout << cnt << ' ';
            cnt++;
        }

        std::cout << std::endl;
    }

    return 0;
}