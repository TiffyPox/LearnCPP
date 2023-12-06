#include <iostream>

int main()
{
    // write a program to print the size of each of the built in types

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

    // predict the output of the following code

    int x[10];
    int *p = x;

    std::cout << sizeof x << std::endl; // 40
    std::cout << sizeof &p << std::endl; // 8

    std::cout << sizeof(x)/sizeof(*x) << std::endl; // 10
    std::cout << sizeof(p)/sizeof(*p) << std::endl; // 2

    return 0;
}