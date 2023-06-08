#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
	// using a range for to process all of the elements in a vector:
	std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (auto &i : v) // for every element in v (note i is a reference)
	{
		i *= i; // square the element value
	}

	for (auto i : v)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;

	return 0;
}