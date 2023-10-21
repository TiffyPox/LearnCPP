#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Write a program that takes two sentences and returns which one is longer in length

	std::cout << "Please give me a sentence:" << std::endl;

	std::string s1;

	getline(std::cin, s1);

	std::cout << "Please give me another sentence:" << std::endl;

	std::string s2;

	getline(std::cin, s2);

	if (s1.size() > s2.size())
	{
		std::cout << "\"" << s1 << "\"" << " is longer than " << "\"" << s2 << "\"" << std::endl;
	}
	else
	{
		std::cout << "\"" << s2 << "\"" << " is longer than " << "\"" << s1 << "\"" << std::endl;
	}

	return 0;
}