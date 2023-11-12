#include <iostream>

int main()
{
    // What are commonly referred to as multidimensional arrays are actually arrays of arrays

    int ma[3] [4]; // array of size 3; each element is an array of ints of size 4

    // array of size 10; each element is a 20 element array whose elements are arrays of 30 ints
    int arr[10] [20] [30] = {0}; // initialize all elements to 0

    // in a two dimension array, the first dimension is referred to as the row, and the second as the column

    constexpr size_t rowCnt = 3;
    constexpr size_t colCnt = 4;

    int rc[3] [4] = 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };


    int ia[rowCnt] [colCnt]; // 12 uninitialized elements

    // p points to an array of 4 ints
    for (auto p = ia; p != ia + 3; p++)
    {
        // q points to the first element of an array of 4 ints, that is, q points to an int
        for (auto q = *p; q != *p + 4; q++)
        {
            std::cout << *q << ' ';
        }

        std::cout << std::endl;
    }

    // using the library begin and end functions
    for (auto r = std::begin(ia); r != std::end(ia); r++)
    {
        for (auto s = std::begin(*r); s != std::end(*r); s++)
        {
            std::cout << 'X' << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}