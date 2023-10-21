#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	int a = 32;
	int *p = 0;

	// Exercise one: Change the value of a pointer
	p = &a;

	if (p)
	{
		std::cout << "Hello Dan" << std::endl;
	}
	else
	{
		std::cout << "Error: p has no value" << std::endl;
	}

	// Exercise two: Change the value to which the pointer points
	*p = 23;

	std::cout << "The value of p is now: " << a << std::endl;

	// This will print 1764 - the sum of *pi * *pi
	int i = 42;
	int *pi = &i;
	*pi = *pi * *pi;

	std::cout << i;
}