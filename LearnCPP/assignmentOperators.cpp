#include <iostream>
#include <vector>
#include <string>

int main()
{
    // the left-hand operand of an assignment operator must be a modifiable lvalue

    // initializations, not assignment
    int i = 0, j = 0, k = 0;
    const int ci = i;

    // illegal assignments
    // 1024 = k; // error: literals are rvalues
    // i + j = k; // error: arithmetic expressions are rvalues
    // ci = k; // error: ci is a nonmodifiable lvalue

    // if the types on the left and right operands differ, the right-hand operand is converted to the type of the left
    k = 0; // result: type int, value 0
    k = 3.14159; // result: type int, value 3

    // under the new standard, we can use a braced initializer list on the right-hand side
    k = {5};
    std::vector<int> nums; // initially empty
    nums = {0, 1, 2, 3, 4, 5}; // nums now has 6 elements, values 0 through 5

    // unlike the other binary operators, assignment is right associative
    int ival;
    int jval;

    int ival = jval = 0; // ok: each assigned 0

    // the right-most assignment, jval = 0 is the right-hand operand of the left-most assignment operator
    // because assignment returns its left-hand operand, the result of the right-most assignment (jval) is assigned to ival

    // each object in a multiple assignment must have the same type as its right-hand operand
    // or a type to which that neighbour can be converted

    std::string s1;
    std::string s2;

    s1 = s2 = "Ok"; // string literaal "Ok" converted to string

    return 0;
}