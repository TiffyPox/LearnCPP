#include <iostream>

int main()
{
    // the answer of sum is 105
    int sum = 5 + 10 * 20/2;
    std::cout << sum << std::endl;

    // bool values should not be used for computation
    bool b = true;
    bool b2 = -b; // also true

    std::cout << b2;

    // for most operators, operands of type bool are promoted to int
    // the value of b is true (int value 1)
    // that (promoted) value is negated, yielding -1
    // the value -1 is converted back to bool and used to initialize b2
    // this initializer is a nonzero value, which when converted to bool, is true

    // paranthesize the following expression
    std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;

    std::cout << (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2) << std::endl;

    int sumA = -30 * 3 + 21 / 5; // (-30 * 3 = -90) + (21 / 5 = 4.2) answer is -86
    int sumB = -30 + 3 * 21 / 5; // -18
    int sumC = -30 / 3 * 21 % 5; // 0
    int sumD = -30 / 3 * 21 % 4; // -2

    return 0;
}