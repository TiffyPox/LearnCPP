#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Using getline() to read an entire line

	std::string line;

	while (getline(std::cin, line)) // read input a line at a time until end-of-file
	{
		std::cout << line << std::endl;
	}

	return 0;
}