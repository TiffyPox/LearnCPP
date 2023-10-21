#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
	// Write a program that reads a list of numbers and stores those values in a vector
	
	std::cout << "Please give me a list of numbers: " << std::endl;

	std::vector<int> numbers{};

	int n = 0;

	while (std::cin >> n)
	{
		numbers.push_back(n);
	}

	std::cout << "Here is the list of numbers you gave: " << std::endl;

	for ( const int &num : numbers )
	{
		std::cout << num << std::endl;
	}

	return 0;
}