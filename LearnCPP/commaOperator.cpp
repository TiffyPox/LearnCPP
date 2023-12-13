#include <iostream>
#include <vector>

int main()
{
    /*
    * The comma operator takes two operands which it evaluates from left to right
    * the result of a comma expression is the value of its right-hand expression
    * the result is an lvalue if the right-hand operand is an lvalue
    */

    // one common use for the comma operator is in a for loop:

    std::vector<int> ivec{ 1, 2, 3, 4, 5 };

    std::vector<int>::size_type cnt = ivec.size();

    for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;

        std::cout << cnt << std::endl;
    }

    // this loop increments ix and decrements cnt in the expression in the for header
    // both ix and cnt are changed on each trip through the loop

    // explain the following loop:

    constexpr int size = 5;

    int ia[size] = { 1, 2, 3, 4, 5 };

    for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
    {
        std::cout << ix << *ptr << std::endl;
    }

    /*
    * initialization - create a pointer to int, the first element in ia, also create an index (ix)
    * conditions - if the index AND the pointer do not equal size, 
    * increment both ix and ptr
    * print the index (0, 1, 2, 3, 4)
    * print the element the pointer points to (1, 2, 3, 4, 5)
    */

    return 0;
}