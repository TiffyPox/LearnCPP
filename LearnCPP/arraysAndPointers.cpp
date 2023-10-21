#include <iostream>
#include <string>
#include <iterator>

int main()
{
    // As with any other object, we can obtain a pointer to an array element by taking the address of that element:
    std::string nums[] = {"one", "two", "three"}; // an array of strings
    std::string *p = &nums[0]; // points to the first element in nums

    /*
    * However, arrays have a special property
    * - in most places when we use an array, the compiler automatically substitutes a pointer to the first element:
    */

    std::string *p2 = nums; // equivalent to p2 = &nums[0]

    /*
     * There are implications of the fact that operations on arrays are often really operations on pointers -
     * When we use an array as an initializer for a variable defined using auto,
     * the deduced type is a pointer, not an array:
     */

    int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints
    auto ia2(ia); // ia2 is an int* that points to the first element in ia

    /*
    * although ia is an array of ten ints, when we use ia as an initializer,
    * the compiler treats that initialization as if we had written:
    * auto ia2(&ia[0]); // now it's clear that ia2 has type int*
    */

    // This conversion does NOT happen when we use the decltype specifier
    // the type returned by decltype(ia) is an array of ten ints:

    decltype(ia) ia3 =  {0,1,2,3,4,5,6,7,8,9}; // ia3 is an array of ten ints

    // Pointers Are Iterators!
    
    /*
     * pointers to array elements support the same operations as iterators on vectors or strings
     * for example, we can use the increment operator to move from one element in an array to the next:
     */

    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *p1 = arr; // points to the first element in arr
    ++p; // now points to arr[1]

    // off-the-end pointer:
    const int *e = &arr[10]; // pointer just past the last element in arr

    // print the elements in arr:
    for (const int *b = arr; b != e; ++b)
    {
        std::cout << *b << " ";
    }

    /*
     * although we can use the above code and compute an off-the-end pointer, doing so is error-prone
     * to make it easier and safer to use pointers, we can use the functions 'begin' and 'end'
     * (these functions are defined in the iterator header)
     * these functions act like the similarly named container members, however, arrays are not class types
     * so these functions are not member functions. Instead, they take an argument that is an array:
     */

    int points[] = {10,20,30,40,50}; // points is an array of five ints
    int *beg = std::begin(points); // pointer to the first element in points
    int *last = std::end(points); // pointer one past the last element in points
    
    return 0;
}
