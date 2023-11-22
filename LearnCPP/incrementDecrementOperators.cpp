#include <iostream>
#include <vector>

int main()
{
    // prefix increments (or decrements) its operand and yields the changed object as its result
    // postfix yields a copy of the original, unchanged value as its result

    int i = 5;
    int j = 0;

    j = ++i; // j = 1, i = 1: prefix yields the incremented value
    j = i++; // j = 1, i = 2: postfix yields the unincremented value

    /* 
    * prefix returns the object itself as an lvalue
    * postfix returns a copy of the object's original value as an rvalue
    * prefix avoids unnecessary work - if we don't need the unincremented value,
    * there's no need for the extra work done by the postfix operator
    */

    std::vector<int> v = { 0, 1, 2, 3 };

    auto pbeg = v.begin();

    while (pbeg != v.end() && *pbeg >= 0)
    {
        std::cout << *pbeg++ << std::endl; // print the current value and advance pbeg
    }

    // *pbeg++ is equivalent to *(pbeg++) - the operand of * is the unincremented value of pbeg
    // the statement prints the element to which pbeg originally pointed to and increments pbeg

    return 0;
}