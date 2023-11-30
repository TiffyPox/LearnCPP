#include <iostream>

int main()
{
    // a teacher has 30 students, track the results of a test using one bit per student to represent a pass or fail

    unsigned long quiz1 = 0; // a collection of bits (at least 32 bits on any machine)

    1UL << 27; // generate a value with only bit number 27 set

    quiz1 |= 1UL << 27; // indicate student number 27 passed

    quiz1 &= ~(1UL << 27); // turn off bit 27, student number 27 failed

    bool status = quiz1 & (1UL << 27);

    std::cout << status << std::endl; // result is 0 - student failed, otherwise, result is nonzero (i.e. true)

    // what is the result of each of these expressions?

    unsigned long ul1 = 3; // 00000011
    unsigned long ul2 = 7; // 00000111

    std::cout << (ul1 & ul2) << std::endl; // prints 3

    std::cout << (ul1 | ul2) << std::endl; // prints 7

    std::cout << (ul1 && ul2) << std::endl; // prints 1

    std::cout << (ul1 || ul2) << std::endl; // prints 1

    return 0;
}