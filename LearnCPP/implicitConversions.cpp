#include <iostream>

int main()
{
    // In addition to the arithmetic conversions, there are several additional kinds of implicit conversions

    // array to pointer conversions:

    int ia[10]; // array of 10 ints
    int* ip = ia; // convert ia to a pointer to the first element

    // there are several other pointer conversions:

    int n = 10;
    const int *n1 = 0; // a constant integral value of 0 can be converted to any pointer type
    n1 = &n;

    std::cout << *n1;

    int nums[5] = {2, 4, 6, 8, 10};
    int* last = nums + 4;
    int* np = { nullptr };

    np = last; // literal nullptr can be converted to any pointer type

    std::cout << *np;

    return 0;
}