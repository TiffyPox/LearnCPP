#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	std::string line;

	while (getline(std::cin, line))
	{
		// if line is 10 or more characters
		if (line.size() >= 10)
		{
			std::cout << line << std::endl;
		}
	}

	auto len = line.size(); // len has type string::size_type

	// Comparing strings

	// if two strings have different lengths:
	std::string str = "Hello";
	std::string phrase = "Hello World"; // phrase is greater than str because it has more characters

	// if any characters in the two strings differ at any time:
	std::string slang = "Hiya"; // slang is greater than str and phrase because i[1] is greater than e[1]

	return 0;
}