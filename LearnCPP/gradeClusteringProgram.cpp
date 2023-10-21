#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printVector(std::vector<unsigned>& n)
{
	std::vector<unsigned> scores(11, 0);

	for (auto it = n.cbegin(); it < n.cend(); ++it)
	{
		if (*it <= 100)
			{
				++scores[*it/10];
			}
	}

	for (auto &c : scores)
	{
		std::cout << c << " ";
	}
}

int main()
{
	// count the number of grades by clusters of ten: 0-9, 10-19... 90-99, 100
	std::vector<unsigned> input{};

	unsigned grade = 0;

	std::cout << "Please enter students grade 0-100 (e.g. 42 65 95 100)" << std::endl;

	while (std::cin >> grade)
	{
		input.push_back(grade);
	}

	std::cout << "Here is your total:" << std::endl;

	printVector(input);

	return 0;
}