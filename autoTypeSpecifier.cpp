#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// The auto Type Specifier
	// auto tells the compiler to figure out the type for us, using information from the initializer

	int val1 = 20;
	int val2 = 30;
	auto item = val1 + val2; // The compiler will figure out the type of item from the result of adding val1 and val2

	int i = 0;
	int &r = i;
	auto a = r; // a is an int (r is an alias for i which has type int)

	const int ci = i;
	const int &cr = ci;
	auto b = ci; // b is an int
	auto c = cr; // c is an int
	auto d = &i; // d is an int*
	auto e = &ci; // e is a const int*

	a = 42;
	b = 42;
	c = 42;

	std::cout << a << " " << b << " " << c << std::endl;
}