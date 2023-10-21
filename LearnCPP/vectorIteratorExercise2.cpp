#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printSum(const std::vector<int>& n)
{
	for (auto it = n.cbegin(); it < n.cend() - 1; ++it)
	{
		int curr = *it;
		int nxt = *(it + 1);

		int answer = curr + nxt;
		std::cout << curr << " + " << nxt << " = " << answer << std::endl;
	}
}

int main()
{
	/*
	* Using iterators, create a program that reads a set of integers into a vector
	* Add each element with its adjacent element and print the results (e.g. {1, 2, 1} = 1 + 2, 2 + 1)
	*/

	std::cout << "Please give me a sequence of numbers (e.g. 1 2 3 4 5 6)" << std::endl;

	std::vector<int> numbers{};

	int input = 0;

	while (std::cin >> input)
	{
		numbers.push_back(input);
	}

	std::cout << "Here are your answers:" << std::endl;

	printSum(numbers);

	return 0;
}