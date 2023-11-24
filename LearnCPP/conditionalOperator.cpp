#include <iostream>
#include <string>

int main()
{
    // the conditional operator lets us embed simple if-else logic inside an expression

    int grade = 0;

    std::cout << "Please provide students grade: ";

    std::cin >> grade;

    std::string finalGrade = (grade < 60) ? "Fail" : "Pass";

    // nesting conditional operators
    finalGrade = (grade > 90) ? "High Pass"
                              : (grade < 60) ? "Fail" : "Pass";
    
    // nested conditionals can become unreadable, it's a good idea to nest no more than two or three

    std::cout << finalGrade << std::endl;

    // using a conditional operator in an output expression

    /*
    * when we embed a conditional expression into a larger expression,
    * we usually must parenthesize the conditional subexpression
    * an incompletely parenthesized conditional operator can have surprising results
    */

   int time = 14;

   std::cout << ((time < 12) ? "AM" : "PM"); // prints AM or PM

   std::cout << (time < 12) ? "AM" : "PM"; // prints 1 or 0

   //std::cout << time < 12 ? "AM" : "PM"; // error: compares cout to 12

   std::cout << (time < 12); // prints 1 or 0

   std::cout ? "AM" : "PM"; // test cout and then yield one of the two literals
                            // depending on whether cout is true or false

   return 0;
}