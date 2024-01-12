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

    int num = 0;

    for (int i = 1; i <= 10; num += i, ++i);

    std::cout << "Sum of 1 to 10 inclusive is " << num << std::endl;

    return 0;
}