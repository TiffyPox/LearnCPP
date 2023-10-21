#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Write a program that takes two sentences and checks if they are equal. If they are not equal, return which one is greater
	
	std::cout << "Please give me a sentence:" << std::endl;

	std::string a1;

	getline(std::cin, a1);

	std::cout << "Please give me another sentence:" << std::endl;

	std::string a2;

	getline(std::cin, a2);

	if (a1 == a2)
	{
		std::cout << "\"" << a1 << "\"" << " and " << "\"" << a2 << "\"" << " are both equal sentences" << std::endl;
	}
	else if (a1 > a2)
	{
		std::cout << "\"" << a1 << "\"" << " is greater than " << "\"" << a2 << "\"" << std::endl;
	}
	else
	{
		std::cout << "\"" << a2 << "\"" << " is greater than " << "\"" << a1 << "\"" << std::endl;
	}

	return 0;
}