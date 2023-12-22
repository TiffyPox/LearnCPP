#include <iostream>
#include <string>

int main()
{
    // In addition to the arithmetic conversions, there are several additional kinds of implicit conversions

    // array to pointer conversions:

    int ia[10]; // array of 10 ints
    int* ip = ia; // convert ia to a pointer to the first element

    // there are several other pointer conversions:

    int n1 = 10;
    const int *n2 = 0; // a constant integral value of 0 can be converted to any pointer type
    n2 = &n1;

    std::cout << *n2 << std::endl;

    int nums[5] = {2, 4, 6, 8, 10};
    int* last = nums + 4;
    int* np = { nullptr };

    np = last; // literal nullptr can be converted to any pointer type

    std::cout << *np << std::endl;

    int a = 20;
    int* b = &a;
    void* c = b; // a pointer to any nonconst type can be converted to void*

    std::cout << *(int*)c << std::endl;
    
    const void* d = b; // a pointer to any type can be converted to a const void*

    // conversions to bool:

    // if the pointer or arithmetic value is zero, the conversions yields false; any other value yields true
    char letter;

    std::cin >> letter;
    
    char *cp = &letter;

    if (cp) // true if the pointer cp is not zero
    {
        std::cout << "Hello World!" << std::endl;
    }

    while (*cp) // true if *cp is not the null character
    {
        std::cout << "Goodbye!" << std::endl;
    }

    // Conversion to const:

    int i;
    const int &j = i; // convert a nonconst to a reference to a const int
    const int *p = &i; // convert address of a nonconst to the address of a const
    // conversion from const to nonconst is not allowed

    // Conversions defined by class types:

    std::string s = "a value"; // character string literal converted to type string

    std::string answer;

    while (std::cin >> answer) // while condition converts cin to bool
    {
        std::cout << "The answer is: " << answer << std::endl;
    }

    return 0;
}