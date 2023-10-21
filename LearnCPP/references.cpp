#include <iostream>
#include <ostream>

int main()
{
	/* 
	* A reference is NOT an object. Instead, a reference is just another name for an already existing object.
	* When we define a reference, instead of copying the initializer's value, we BIND the reference to its initializer.
	* Once initialized, a reference remains bound to its initial object. 
	* There is no way to rebind a reference to refer to a different object.
	* Because there is no way to rebind a reference, references must be initialized.
	*/

	int ival = 1024;
	int &refVal = ival; // refVal refers to (is another name for) ival
	// int &refVal2; // error: a reference must be initialized

	// After a reference has been defined, ALL operations on that reference are actually operations on the object to which the reference is bound.
	refVal = 2; // Assigns 2 to the object to which refVal refers to i.e. to ival
	int ii = refVal; // Same as ii = ival;
	int &refVal3 = refVal; // refVal3 is bound to the object that refVal is bound to

	// Will each print 2
	std::cout << ival;
	std::cout << refVal;
	std::cout << ii;
	std::cout << refVal3;

	int i, &ri = i;
	i = 5; ri = 10; // i becomes 5 but then ri replaces 5 with 10

	// Thus, this will print out 10 10
	std::cout << i << " " << ri << std::endl;
}