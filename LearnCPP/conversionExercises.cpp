#include <iostream>
#include <string>

int main()
{
    // write the expression i *= d so that it does integral rather than floating-point multiplication:
    int i = 5;
    double d = 12.5;

    int sum = i *= static_cast<int>(d);

    std::cout << sum << std::endl;

    // rewrite each of the following old-style casts to use a named cast:

    int a = 5;
    double b = 10;
    const std::string *ps;
    char *pc;
    void *pv;

    // pv = (void*)ps
    pv = const_cast<std::string*>(ps);

    // i = int(*pc)
    

    // pv = &d

    // pc = (char*) pv


    return 0;
}