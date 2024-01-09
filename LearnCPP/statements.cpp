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
    char c;

    while (std::cin >> c && c != sought)
    {
        ; // null statement, if the value is found, exit the loop
    }

    // null statements SHOULD be commented so that anyone reading the code knows the statement was intentional

    // Compound Statements (Blocks)

    /*
    * a compound statement, usually referred to as a block, is a (possibly empty) sequence of statements
    * and declarations surrounded by a pair of curly braces
    */

    int val = 0;
    int sum = 0;

    while (val <= 10)
    {
        sum += val; // assigns sum + val to sum
        ++val; // add 1 to val
    }

    // by enclosing these statements in curly braces, we made them into a single (compound statement)

    // we can also define an empty block by writing a pair of curlies with no statements
    // an empty block is equivalent to a null statement:

    int score = 10;
    int i;

    while (std::cin >> i && i != score)
    { } // empty block

    return 0;
}