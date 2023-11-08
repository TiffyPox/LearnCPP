#include <iostream>
#include <cstring>

int main()
{
    // C-Style strings are not a type
    // instead they are a convention for how to represent and use character strings
    // strings that follow this convention are stored in character arrays and are null terminated
    // by null terminated we mean that the last character in the string is followed by a null character (\0')
    // ordinarily, we use pointers to manipulate these strings

    char t1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char t2[6] = {'W', 'o', 'r', 'l', 'd', '\0'};
    
    std::cout << strlen(t1) << std::endl; // returns the length of t1

    // strcat concatenates two strings but it is recommended we use an array to hold the resulting string
    // the array we pass must be large enough to hold the generated string as well as the null character at the end
    char full[255]{};

    std::strcat(full, t1);
    std::strcat(full, t2);

    std::cout << full << std::endl;

    // other functions...

    std::strcpy(t1, t2); // copies string t2 into string t1

    std::cout << t1 << std::endl;

    char e1[8] = {'T', 'i', 'f','f', 'a', 'n', 'y', '\0'};

    char e2[6] = {'J', 'a', 'y', 'n', 'e', '\0'};

    // returns 0 if e1 and e2 are equal, a negative number if e1 < e2, a positive number if e1 > e2
    std::cout << std::strcmp(e1,e2) << std::endl;

    return 0;
}