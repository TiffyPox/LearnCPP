#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Using a range for to change the characters in a string

	std::string s("Hello GitHub!!!");

	// convert s to uppercase
	for (auto &c : s) // for every char in s
	{
		c = toupper(c); // c is a ref so the assignment changes the char in s
	}

	std::cout << s << std::endl;

	// supplying an index to print individual characters

	if (!s.empty())
	{
		s[8] = toupper(s[8]);

		std::cout << s[0] << s[7] << s[13] << std::endl;
	}

	return 0;
}