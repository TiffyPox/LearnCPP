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
    int a;
    double b;
    const std::string *ps;
    char *pc;
    void *pv;

    // pv = (void*)ps
    pv = const_cast<std::string*>(ps);

    // a = int(*pc)
    a = static_cast<int>(*pc);

    // pv = &b
    pv = static_cast<void*>(&b);

    // pc = (char*) pv
    pc = static_cast<char*>(pv);

    return 0;
}