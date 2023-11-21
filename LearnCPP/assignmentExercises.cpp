#include <iostream>

int main()
{
    // what are the values of i and d after each assignment?
    int i;
    double d;
    d = i = 3.5f;

    // result of the right-most assignment is assigned to d
    std::cout << d;

    i = d = 3.5f;

    std::cout << i;

    // wrong: assigns the value of 42 to i and then tests the result of the assignment
    if (i = 42)
    {
        std::cout << "Hello World";
    }

    // correct: testing whether i is equal to 42
    if (i == 42)
    {
        std::cout << "value is 42";
    }

    // error: dval = ival = pi = 42
    // pi is an int*, cannot be converted to int
    double dval;
    int ival;
    int *pi = &ival;

    dval = ival = 42;

    std::cout << *pi;

    return 0;
}