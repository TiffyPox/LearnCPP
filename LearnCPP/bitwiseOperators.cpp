#include <iostream>

int main()
{
    int a = 5; // 00000101
    int b = 9; // 00001001

    std::cout << "a = " << a << "," << " b = " << b << std::endl;

    // bitwise AND - bit is 1 if both operands contain 1, otherwise result is 0:

    std::cout << "a & b = " << (a & b) << std::endl; // prints 1 (00000001)

    // bitwise OR (inclusive or) - bit is 1 if either or both operands contain 1, otherwise result is 0:

    std::cout << "a | b = " << (a | b) << std::endl; // prints 13 (00001101)

    // bitwise XOR (exclusive or) - bit is 1 if either but not both operands contain 1, otherwise result is 0:

    std::cout << "a ^ b = " << (a ^ b) << std::endl; // prints 12 (00001100)

    // bitwise NOT operator - generates a new value with the bits of its operand inverted (1 = 0, 0 = 1):

    std::cout << "~a = " << (~a) << std::endl; // prints -6 (11111010)

    // bitwise Shift operators - bits that are shifted off the end are discarded:

    std::cout << "b << 1 " << "= " << (b << 1) << std::endl; // prints 18 (00010010)

    std::cout << "b >> 1 " << "= " << (b >> 1) << std::endl; // prints 4 (00000100)

    return 0;
}