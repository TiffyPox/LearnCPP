#include <iostream>

int main()
{
    // rewrite the following code using the comma operator so that it no longer requires a block:

    int sum = 0;
    int val = 1;

    while (val <= 10)
    {
        sum += val;
        ++val;
    }

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    int num = 0;

    for (int i = 0; i <= 10; i++, num += i);

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}