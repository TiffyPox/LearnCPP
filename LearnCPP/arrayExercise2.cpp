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
    for (int (*p)[3] = ia; p != std::end(ia); p++)
    {
        for (int (*q) = *p; q != std::end(*p); q++)
        {
            std::cout << *q << ' ';
        }

        std::cout << std::endl;
    }

    // using a type alias
    typedef int int_arr[3];
    
    for (int_arr *r = ia; r != ia + 2; r++)
    {
        for (int *s = *r; s != *r + 3; s++)
        {
            std::cout << *s << ' ';
        }
        
        std::cout << std::endl;
    }

    // using auto
    for (const auto &row : ia)
    {
        for (auto col : row)
        {
            std::cout << col << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}