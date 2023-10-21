#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Use a range for to change all of the characters in a string to 'X'

	std::cout << "Please enter a sentence of your choice:" << std::endl;

	std::string input;

	const char x = 'X';

	while (getline(std::cin, input))
	{
		for (decltype(input.size()) index = 0; index != input.size(); index++)
		{
			input[index] = x;
		}

		std::cout << input << std::endl;
	}

	// Using a char as a loop control variable:

	// std::string inputTwo;

	// while (getline(std::cin, inputTwo))
	// {
	// 	for (auto &c : inputTwo)
	// 	{
	// 		c = 'X';
	// 	}

	// 	std::cout << inputTwo << std::endl;
	// }

	return 0;
}