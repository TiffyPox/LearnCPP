#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printSum(const std::vector<int>& n)
{
	for (size_t i = 0; i <= (n.size() - 1) / 2; i++)
	{
		int a = n[i];
		int b = n[n.size() - 1 - i];

		int answer = a + b;
		std::cout << a << " + " << b << " = " << answer << std::endl;
	}
}

int main()
{
	/*
	* Create a program that reads a set of integers into a vector
	* Add the first and last elements, then add the second and the second-to-last element and so on...
	*/

	std::cout << "Please give me a sequence of numbers (e.g. 1 2 3 4 5 6)" << std::endl;

	std::vector<int> numbers{};

	int input = 0;

	while (std::cin >> input)
	{
		numbers.push_back(input);
	}

	std::cout << "Here are your answers: " << std::endl;

	printSum(numbers);

	return 0;
}