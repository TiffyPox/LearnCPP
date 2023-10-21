#include <iterator>

int main()
{
    // ++ Pointer Arithmetic ++

    /*
     * When we add (or subtract) an integral value to (or from) a pointer, the result is a new pointer
     * That new pointer points to the element the given number ahead of (or behind) the original pointer:
     */

    constexpr size_t sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *ip = arr; // equivalent to int *ip = &arr[0]
    int *ip2 = ip + 4; // ip2 points to arr[4], the last element in arr

    // as with iterators, subtracting two pointers gives us the distance between those pointers
    // the pointers must point to elements in the same array:
    auto n = std::end(arr) - std::begin(arr); // n is 5, the number of elements in arr

    // we can use the relational operators to compare pointers that point to elements of an array
    // or one past the last element in that array:
    const int *begin = arr;
    const int *end = arr +sz;
    
    while (begin < end)
    {
        ++begin;
    }

    // we CANNOT use the relational operators on pointers to two unrelated objects:
    constexpr int a = 0;
    constexpr int b = 42;

    const int *c = &a;
    const int *d = &b;

    while (c < d)
    {
        // error: c and d are unrelated; comparison is meaningless:
    }

    // ++ Interaction between Dereference and Pointer Arithmetic ++
    
    // the result of adding an integral value to a pointer is itself a pointer.
    // assuming the resulting pointer points to an element, we can dereference the resulting pointer:
    const int numbers[] = {0,2,4,6,8}; // array with five elements of type int
    int last = *(numbers + 4); // initializes last to 8, the value of numbers[4]

    // the expression *(numbers + 4) calculates the address four elements past numbers
    // and references the resulting pointer. This is equivalent to writing numbers[4]

    // ++ Subscripts and Pointers ++

    // we can use the subscript operator on any pointer, as long as that pointer points to an element
    // (or one past the last element) in an array:
    const int scores[] = {10,20,30,40,50};

    const int *third_place = &scores[2]; // third_place points to the element indexed by 2
    int second_place = third_place[1];   // third_place[1] is equivalent to *(third_place + 1);
                                         // third_place[1] is the same element as scores[3]
    int fifth_place = third_place[-2];   // third_place[-2] is the same element as scores[0]
    
    return 0;
}
