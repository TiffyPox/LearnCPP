#include <iostream>
#include <string>

int main()
{
    // Sometimes we want to explicitly force an object to be converted to a different type
    // We use a cast to request an explicit conversion

    int i = 0;
    int j = 0;

    // a static cast is useful when a larger arithmetic type is assigned to a smaller one
    double slope = static_cast<double>(j) / i; // <double> is the target type, (j) is the value to be cast

    /*
    * the cast informs both the reader of the program and the compiler that we are aware of
    * (and not concerned about) the potential loss of precision
    */

    // we can use a static_cast to retrieve a pointer value that was stored in a void* pointer

    double d = 32;
    void* p1 = &d;
    double *dp = static_cast<double*>(p1); // converts void* back to the original pointer type

    // const_cast changes only a low-level const in its operand
    const char *pc;
    char *p2 = const_cast<char*>(pc);

    /*
    * only a const_cast can be used to change the constness of an expression
    * we can't use const_cast to change the type of an expression
    */

   const char *cp;
   // error: char *q1 = static_cast<char*>(cp); (static_cast can't cast away const)

   static_cast<std::string>(cp); // converts string literal to string
   // error: const_cast<std::string>(cp); (const_cast only changes constness, NOT type)

    return 0;
}