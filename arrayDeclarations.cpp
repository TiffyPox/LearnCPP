int main()
{
    int arr[10] {0,1,2,3,4,5,6,7,8,9};
    
     // Because an array is an object, we can define both pointers and references to arrays

    int *ptrs[10]; // ptrs is an array of ten pointers to int
    int (*Parray) [10] = &arr; // Parray points to an array of ten ints
    int (&arrRef) [10] = arr; // arrRef refers to an array of ten ints
    int *(&arry) [10] = ptrs; // arry is a reference to an array of ten pointers
    
    return 0;
}
