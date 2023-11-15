#include <iostream>

int main()
{
    // An expression is composed of one or more operands and yields a result when it is evaluated

    /*
    * understanding expressions with multiple operators requires understanding the precedence and associativity
    * of the operators and may depend on the order of evaluation of the operands
    */

    // multiplication and division have the same precedence as each other, but they have higher precedence that addition
    // therefore, operands to multiplication and division group before operands of addition and subtraction

    // because of precedence, the result of this expression is 23, not 35
    int sum = 3 + 4 * 5;
    std::cout << sum << std::endl;

    // because of associativity, the result of this expression is 2, not 8
    int sum2 = 20 - 15 - 3;
    std::cout << sum2 << std::endl;

    // result is 14
    int sum3 = ((6 + ((3 * 4) / 2)) + 2);
    std::cout << sum3 << std::endl;

    // overiding the normal grouping with parentheses
    std::cout << (6 + 3) * (4 / 2 + 2) << std::endl; // prints 36
    std::cout << ((6 + 3) * 4) / 2 + 2 << std::endl; // prints 20
    std::cout << 6 + 3 * 4 / (2 + 2) << std::endl; // prints 9

    return 0;
}