#include <iostream>

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
    void* p = &d;
    double *dp = static_cast<double*>(p); // converts void* back to the original pointer type

    return 0;
}