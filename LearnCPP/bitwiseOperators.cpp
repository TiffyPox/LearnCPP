#include <iostream>

int main()
{
    int a = 5; // 00000101
    int b = 9; // 00001001

    std::cout << "a = " << a << "," << " b = " << b << std::endl;

    std::cout << "a & b = " << (a & b) << std::endl; // prints 1 (00000001)

    std::cout << "a | b = " << (a | b) << std::endl; // prints 13 (00001101)

    std::cout << "a ^ b = " << (a ^ b) << std::endl; // prints 12 (00001100)

    std::cout << "~a = " << (~a) << std::endl; // prints -6 (11111010)

    std::cout << "b << 1 " << "= " << (b << 1) << std::endl; // prints 18 (00010010)

    std::cout << "b >> 1 " << "= " << (b >> 1) << std::endl; // prints 4 (00000100)

    return 0;
}