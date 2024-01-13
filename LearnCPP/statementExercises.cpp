#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    int sum = 0;
    int val = 1;

    while (val <= 10)
    {
        sum += val;
        ++val;
    }

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    
    // rewrite the code above using the comma operator so that it no longer requires a block:

    int sum2 = 0;
    int val2 = 1;

    while (val2 <= 10 && (sum2 += val2, ++val2));

    std::cout << "Sum of 1 to 10 inclusive is " << sum2 << std::endl;

    // using a for loop:

    int sum3 = 0;

    for (int i = 1; i <= 10; sum3 += i, ++i);

    std::cout << "Sum of 1 to 10 inclusive is " << sum3 << std::endl;

    std::string s = "Hello World";

    std::string::iterator iter = s.begin();

    // while (iter != s.end())
    // {
    //     std::cout << *iter;
    //     ++iter;
    // }

    std::string::iterator iter2 = s.begin();

    int numbers[] = {5, 10, 15, 20};

    int * winner;

    while (int* winner = std::find(numbers, numbers + 4, 20))
    {
        if (winner != numbers + 4)
        {
            std::cout << "Number not found";
        }
        else
        {
            std::cout << "Number found";
        }
    }

    return 0;
}