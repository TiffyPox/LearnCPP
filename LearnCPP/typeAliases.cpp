#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// Type Aliases

	// A type alias is a name that is a synonym for another type:
	typedef double wages; // wages is a synonym for double
	typedef wages hourly; // hourly is a synonym for double
	typedef wages *p; // p is a synonym for double*

	hourly minimum = 10;
	p amount = &minimum;

	std::cout << *amount;

	// // An alias declaration:
	// using SI = Sales_item; // SI is a synonym for Sales_item
	// SI item; // Same as Sales_item item

	// typedef char *pstring;
	// const pstring cstr = 0; // cstr is a constant pointer to char
	// const pstring *ps; // ps is a pointer to a constant pointer to char
}