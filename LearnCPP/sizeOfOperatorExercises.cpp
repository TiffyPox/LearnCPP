#include <iostream>

int main()
{
    // print the amount of bytes in each built-in type
    
    bool a; // 1
    short b; // 2
    int c; // 4
    double d; // 8

    std::cout << sizeof a << sizeof b << sizeof c << sizeof d << std::endl;

    return 0;
}