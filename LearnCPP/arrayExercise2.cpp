#include <array>
#include <iostream>

int main()
{
    int ia[2][3]{ 0 };

    for (int i = 0; i < 2; i++) // for every element in the outer array
    {
        for (int j = 0; j < 3; j++) // for every element in the inner array
        {
            std::cout << ia[i][j] << ' ';
        }

        std::cout << std::endl;
    }

    // using a range for
    for (int (&row)[3] : ia)
    {
        for (int col : row)
        {
            std::cout << col << ' ';
        }

        std::cout << std::endl;
    }

    // using a pointer
    for (int (*p)[3] = ia; p < std::end(ia); p++)
    {
        for (int (*q) = *p; q != std::end(*p); q++)
        {
            std::cout << *q << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}