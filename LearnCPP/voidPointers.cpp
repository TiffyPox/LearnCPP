#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// void* Pointers

	// The type void* is a special pointer type that can hold the address of any object.
	// Like any other pointer, a void* pointer holds an address, but the type of object at that address is unknown:

	double obj = 3.14, *pd = &obj;
	// void* can hold the address value of any data pointer type

	void *pv = &obj; // obj can be an object of any type
	pv = pd; // pv can hold a pointer of any type
}