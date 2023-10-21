#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	std::string s("Hello GitHub!!!");

	// Using a Subscript operator ([] operator) for Iteration

	// process characters in s until we run out of characters or hit a whitespace
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
	{
		s[index] = toupper(s[index]);
	}

	std::cout << s << std::endl;

	return 0;
}