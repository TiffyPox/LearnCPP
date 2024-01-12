#include <iostream>

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

    return 0;
}