#include <iostream>

int main()
{
    // Simple Statements

    int ival = 0;

    ival + 5; // useless expression statement - addition is done but result is not used
    std::cout << ival; // useful expression statement

    // more commonly, an expression statement contains an expression that has a side-effect
    // such as assigning a new value to a variable, or printing a result - when it is evaluated  

    // Null Statements

    // the simplest statement is the empty statement, also known as a null statement:
    ; // single semicolon

    /*
    * a null statement is useful where the language requires a statement but the program's logic does not
    * for example we might want to read an input stream, ignoring everything until we encounter a particular value:
    */

   char sought = 63;

   char s;

    while (std::cin >> s && s != sought)
    {
        ; // null statement, if the value is found, exit the loop
    }

    // Null statements SHOULD be commented so that anyone reading the code knows the statement was intentional

    return 0;
}