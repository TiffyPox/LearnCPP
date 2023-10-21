#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	int dan = 32;
	int *p = &dan; // p points to an int
	int **pp = &p; // a pointer that points to a pointer to an int

	std::cout << "The value of Dan\n"
		      << "direct value: " << dan << "\n"
		      << "indirect value: " << *p << "\n"
		      << "doubly indirect value: " << **pp 
		      << std::endl;

	/*
	* A reference is not an object, therefore we cannot have a pointer to a reference 
	* But because a pointer is an object, we can define a reference to a pointer:
	*/
	int i = 100;
	int *pi; // pi is a pointer to int
	int *&r = pi; // r is a reference to the pointer pi
	r = &i; // r refers to a pointer; assigning &i to r makes pi point to i
	*r = 0; // dereferencing r yields i, the object to which pi points; changes i to 0

	std::cout << i;
}