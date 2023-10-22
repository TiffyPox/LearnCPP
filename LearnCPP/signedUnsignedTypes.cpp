#include <iostream>

int main()
{

    /*
    * A signed type represents both positive and negative numbers
    * An unsigned type represents only values greater than or equal to zero
    * The types int, short, long and long long are all signed 
    */
    unsigned u = 10;
    unsigned u2 = 20;

    std::cout << u2 - u << std::endl;

    /*
    * In an unsigned type, all the bits represent the value
    * e.g. an 8-bit unsigned char can hold the values 0 through 255 inclusive
    * The range for signed types should be evenly divided between positive and negative values
    * e.g an 8-bit signed char will hold the values from -127 through 127.
    */

   bool b = 42; // b is truegit 
   int i = b; // i has value 1
   int i2 = 3.14; // i2 has value 3
   double pi = i; // pi has value 3.0
   unsigned char c = -1; // assuming 8-bit chars, c has value 255
   //signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undefined

    return 0;
}