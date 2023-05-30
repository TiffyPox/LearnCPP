#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	char i = 0;
	char &r = i;
	auto a = r;

	const char ci = i;
	const char &cr = ci;
	auto b = ci;
	auto c = cr;

	// Using Ascii table, this will print "Hi!"
	a = 72;
	b = 105;
	c = 33;

	std::cout << a << b << c << std::endl;

	return 0;
}
