#include <iostream>

int main()
{
    // create a program using a while loop and then create the same program using a for loop

    int n = 10;

    for (int i = n; i != 0; --i)
    {
        std::cout << i << " ";
    }
    
    int x = 10;
    
    while (x != 0)
    {
        std::cout << x << " ";
        --x;
    }

    return 0;
}