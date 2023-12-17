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

    // exercises continued ..

    // (a)

    char c = 'a';

    c = 'b' + 2;

    int d = c;

    std::cout << c; // prints d

    std::cout << d; // prints 100

    // (b)

    float f = 1.0f;
    unsigned int ui = 1;
    int i = 1;

    f = (ui - (i * 1.0));

    if (!f)
    {
        std::cout << "f is zero";
    }

    // (c)

    double n1 = 3.2;
    unsigned int n2 = 5;
    float n3 = 5.5f;

    n1 = n2 * n3;

    std::cout << n1; // prints 27.5

    // (d)

    char let = 't';
    int num = 3;
    float flo = 4.0f;
    double dub = 3.5;

    let = num + flo + dub; 
    
    std::cout << let; // (10) prints a new line

    std::cout << "This is a new line";

    return 0;
}