#include <iostream>
#include <ostream>

int main()
{
	// Ask the user for two numbers
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	// Add the two numbers together and give the result to the user
	std::cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << std::endl;

	// Check if the result is an odd or even number
	if((v1 + v2) % 2 == 0)
	{
		std::cout << "That's an even number!" << std::endl;
	}
	else
	{
		std::cout << "That's an odd number!" << std::endl;
	}

	return 0;
} 