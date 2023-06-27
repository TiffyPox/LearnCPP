#include <ostream>
#include <cstdlib>

int main()
{
    /*
     *  An array is a container of unnamed objects of a single type that we access by position
     *  Unlike a vector, arrays have fixed size; we cannot add elements to an array
     *  If you don't know how many elements you need, use a vector
     */

    unsigned cnt = 42; // not a constant expression
    constexpr unsigned sz = 42; // a constant expression

    int arr[10]; // an array of ten ints
    int *parr[sz]; // array of 42 pointers to int
    // string bad[cnt]; // error: cnt is not a constant expression

    const unsigned a = 3;
    int a1[a] = {0,1,2}; // an array of three ints with values 0,1,2
    int a2[] = {0, 1, 2}; // an array of dimension 3
    int a3[5] = {0, 1, 2}; // equivalent to a3[] = {0, 1, 2, 0 0}
    std::string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""};
    // int a5[2] = {0,1,2}; // error: too many initializers

    /*
     * Character arrays have an additional form of initialization
     * It is important to remember that string literals end with a null character
     * That null character is copied into the array along with the characters in the literal:
     */

    char c1[] = {'C', '+', '+'}; // list initialization, no null
    char c2[] = {'C', '+', '+', '\0'}; // list initialization, explicit null
    char c3[] = "C++"; // null terminator added automatically
    // const char a4[6] "Daniel"; // error: no space for the null!

    // NO copy or assignment
    // We cannot initialize an array as a copy of another array, nor is it legal to assign one array to another

    int num[] = {0, 1, 2}; // array of three ints
    // int num2[] = num; // error: cannot initialize one array with another
    // num2 = num; // error: cannot assign one array to another
    
    return 0;
}
