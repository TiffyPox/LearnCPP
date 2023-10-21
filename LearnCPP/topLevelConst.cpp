#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// Top-Level const
	/*
	* We use the term top-level const to indicate that the pointer itself is const
	* When a pointer can point to a const object, we refer to that const as a low-level const
	*/

	int i = 0;
	int *const p1 = &i; // we can't change the value of p1; const is top-level
	const int ci = 42; // we cannot change ci; const is top-level
	const int *p2 = &ci; // we can change p2; const is low-level
	const int *const p3 = p2; // right-most const is top-level, left-most const is not
	const int &r = ci; // const in reference type is always low-level

	// The distinction between these terms matters when we copy an object. When we copy an object, top-level consts are ignored:
	i = ci; // ok: copying the value of ci; top-level const in ci is ignored
	p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored 

	/*
	* Copying an object doesn't change the copied object.
	* Low-level consts are never ignored. When we copy an object, both objects must have the same low-level const qualification
	* OR there must be a conversion between the types of the two objects
	* In general, we can convert a nonconst to const but not the other way around
	*/

	int *p = p3; // error: p3 has a low-level const but p doesn't
	p2 = p3; // ok: p2 has the same low-level const qualification as p3
	p2 = &i; // ok: we can convert int* to const int*
	int &r = ci; // error: can't bind an ordinary int& to a const int object
	const int &r2 = i; // ok: can bind const int& to a plain int
}