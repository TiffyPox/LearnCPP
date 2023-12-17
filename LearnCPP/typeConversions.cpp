#include <iostream>

int main()
{
    /*
    * In C++ some types are related to each other
    * Two types are related to each other if there is a conversion between them
    */

    double a = 3.541;
    int b = 3;

    int sum = a  + b; // implicit conversion takes place

    std::cout << sum; // 6

    // b is converted to double, floating-point addition is done, result is a double
    // the double result of the addition is converted to int and initialized to sum
    // converting a double to an int truncates the double's value, discarding the decimal portion

    // arithmetic conversions
    bool flag;
    short sval;
    int ival = 5;
    long lval = 116;
    float fval = 2.5f;
    char cval = 'b';
    unsigned short usval;
    unsigned int uival;
    unsigned long ulval = 122;
    double dval = 4.5;

    3.14159L + 'a'; // 'a' promoted to int, then that int is converted to long double (100.142)
    dval + ival; // ival converted to double (9.5)
    dval + fval; // fval converted to double (7)
    ival = dval; // dval converted (by truncation) to int (ival is 4)
    flag = dval; // if dval is 0, then flag is false, otherwise true (true)
    cval + fval; // cval promoted to int, then that int is converted to float (100.5)
    sval + cval; // sval and cval promoted to int (98)
    cval + lval; // cval converted to long (214)
    ival + ulval; // ival converted to unsigned long (126)

    // machine dependant result:
    usval + ival; // promotion depends on the size of unsigned short and int
    uival +ival; // conversion depends on the size of unsigned int and long

    if (fval) // non-bool expression converted to bool
    {
        std::cout << "Hello World";
    }

    dval = fval + ival; // ival converted to float (6.5), float converted to double

    double result = (dval + (ival * cval));

    std::cout << result; // cval promoted to int, int converted to double (398.5)

    return 0;
}