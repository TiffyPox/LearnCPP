#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Write a program that reads a string, removes the punctuation characters and then prints the resulting string:

	std::cout << "Enter a sentence of your choice and include punctuation characters!" << std::endl;

	std::string s;

	while (getline(std::cin, s))
	{
		std::string result;

		for (decltype(s.size()) i = 0; i != s.size(); i++)
		{
			if (!ispunct(s[i]))
			{
				result += s[i];
			}
		}

		std::cout << result << std::endl;
	}

	return 0;
}