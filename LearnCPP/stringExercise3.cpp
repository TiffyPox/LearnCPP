#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Write a program that reads strings, concatenating them into one large string:

	std::cout << "Give me a sentence about an animal, a place and a type of food " << 
	"(e.g. \"a cat in Mexico with a mushroom\")\nWrite as many as you want:" << std::endl;

	std::string line;

	if (std::cin >> line)
	{
		std::string currLine = line;

		while (getline(std::cin, line))
		{
			currLine += line + " and ";
		}

		std::string story = "Once upon a time there was " + currLine + "that was the end of it.";

		std::cout << story << std::endl;
	}
	else
	{
		std::cerr << "No data was entered!" << std::endl;
		return -1;
	}

	return 0;
}