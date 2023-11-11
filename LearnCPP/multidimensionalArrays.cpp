#include <iostream>

int main()
{
    // What are commonly referred to as multidimensional arrays are actually arrays of arrays

    int ma[3] [4]; // array of size 3; each element is an array of ints of size 4

    // array of size 10; each element is a 20 element array whose elements are arrays of 30 ints
    int arr[10] [20] [30] = {0}; // initialize all elements to 0

    // in a two dimension array, the first dimension is referred to as the row, and the second as the column

    return 0;
}