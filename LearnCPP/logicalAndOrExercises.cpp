#include <iostream>

int main()
{
    // write the condition for a while loop that would read ints from the standard input 
    // and stop when the value read is equal to 42
    int num = 0;

    while (std::cin >> num)
    {
        if (num == 42)
        {
            std::cout << "Success!" << std::endl;
            return 0;
        }
    }

    // write an expression that tests four values, a, b, c and d
    // ensure that a is the greatest and d is the least
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cout << "Please give me four numbers" << std::endl;

    while (std::cin >> a >> b >> c >> d)
    {
        if (a > b && b > c && c > d)
        {
            std::cout << "Success!" << std::endl;
            return 0;
        }
    }
}