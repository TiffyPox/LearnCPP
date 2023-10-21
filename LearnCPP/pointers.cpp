#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	/* 
	* A pointer is a compound type that "points to" another type.
	* Like references, pointers are used for indirect access to other objects.
	* Unlike a reference, a pointer can point to several different objects over its lifetime.
	* Unlike a reference, a pointer need not be initialized at the time it is defined.
	*/ 

	int *ip1, *ip2; // both ip1 and ip2 are pointers to an int
	double dp, *dp2; // dp2 is a pointer to a double; dp is a double

	// A pointer holds the address of another object. We get the address of an object by using the address-of operator (the & operator):
	int ival = 42;
	int *p = &ival; // p holds the address of ival; p is a pointer to ival

	// Because references are not objects, they don't have addresses. Hence, we may NOT define a pointer to a reference.

	// The types of the pointer and the object to which it points must match:
	double dval;
	double *pd = &dval; // Initializer is the address of a double
	double *pd2 = pd; // Initializer is a pointer to a double

	int *pi = pd; // error: the types of pi and pd are different
	pi = &dval; // error: assigning the address of a double to a pointer to int

	// A null pointer does not point to any object
	int *p1 = nullptr; // equivalent to int *p1 = 0;
	int *p2 = 0; // directly initializes p2 from the literal constant 0

	// MUST #include <cstdlib>
	int *p3 = NULL; // equivalent to int *p3 = 0;

	// When we assign to a pointer, we give the pointer itself a new value. Assignment makes the pointer point to a different object:
	int i = 42;
	int *pi = 0; // pi is initialized but addresses no object
	int *pi2 = &i; // pi2 is initialized to hold the address of i
	int *pi3; // if pi3 is defined inside a block, pi3 is uninitialized
	pi3 = pi2; // pi3 and pi2 address the same object: i
	pi2 = 0; // pi2 now addresses NO object

	// This assigns a new value to pi which changes the address that pi holds:
	pi = &ival; // value in pi is changed, pi now points to ival

	// This changes the value to which pi points to:
	*pi = 0; // value in ival is changed, pi is unchanged

	// So long as the pointer has a valid value, we can use a pointer in a condition:
	int ival = 1024;
	int *pi = 0; // pi is a valid, null pointer
	int *pi2 = &ival; // pi2 is a valid pointer that holds the address of ival

	if (pi) 
	{
		// pi has value 0, so condition evaluates as false
	}

	if (pi2)
	{
		// pi2 points to ival, so it is not 0; therefore the condition evaluates as true
	}

	/*
	* Any non-zero pointer evaluates as true.
	* Two pointers are equal if they hold the same address and are unequal otherwise.
	* Two pointers are equal if they are both null.
	*/
}