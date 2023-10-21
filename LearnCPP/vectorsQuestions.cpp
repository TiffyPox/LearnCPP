#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
	/*
	* Is the following legal? If not, how might you fix it?
	* std::vector<int> ivec;
	* ivec[0] = 42;
	*/

	std::vector<int> ivec;

	int i = 42;

	ivec.push_back(i);

	std::cout << ivec[0] << std::endl;

	// List three ways to define a vector with ten elements, each with the value 42
	std::vector<int> one{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	std::vector<int> two(10, 42);
	std::vector<int> three(one);

	std::cout << one[9] << " " << two[9] << " " << three[9];

	return 0;
}