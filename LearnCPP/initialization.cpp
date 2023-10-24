#include <iostream>

std::string global_str; // empty string
int global_int; // outside of function body, initialized to 0

void initializeString(std::string a)
{
    a = "hello world";
    std::cout << a << std::endl;
}

void initializeInt(int b)
{
    b = 42;
    std::cout << b << std::endl;
}

int main()
{
    int local_int; // uninitialized int
    std::string local_str; // empty string

    initializeString(global_str);
    initializeInt(global_int);

    return 0;
}