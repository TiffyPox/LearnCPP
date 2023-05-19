#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// Reference to const (const reference)

	const int ci = 1024;
	const int &r1 = ci; // this is okay, both the reference and underlying object are const
	r1 = 42; // error: r1 is a reference to const
	int &r2 = ci; // error: non-const reference to a const object

	int a = 32;
	int &a1 = a; // a1 is bound to a
	const int &a2 = a; // a2 is also bound to a but cannot be used to change a
	a1 = 0; // a1 is not a const so a is now 0
	a2 = 0; // error: a2 is a reference to const

	std::cout << a1 << " " << a2 << std::endl;
}