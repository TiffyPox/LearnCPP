#include <iostream>

int main()
{
    // print the amount of bytes in each built-in type

    bool a; // 1
    short b; // 2
    int c; // 4
    double d; // 8

    std::cout << sizeof a << sizeof b << sizeof c << sizeof d << std::endl;

    char e; // 1
    long f; // 8
    long long g; // 8
    float h; // 4
    long double i; // 16

    std::cout << sizeof e << sizeof f << sizeof g << sizeof h << sizeof i << std::endl;

    wchar_t j; // 4
    char16_t k; // 2
    char32_t l; // 4

    std::cout << sizeof j << sizeof k << sizeof l << std::endl;

    return 0;
}