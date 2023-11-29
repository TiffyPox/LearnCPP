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

    return 0;
}