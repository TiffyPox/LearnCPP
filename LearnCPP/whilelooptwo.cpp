
#include <iostream>
#include <ostream>

int main()
{
	// Ask the user for two numbers
	int n1 = 0, n2 = 0;
	std::cout << "Please give me a number: ";
	std::cin >> n1;
	std::cout << "Please give me a different number: ";
	std::cin >> n2;

	int smallest = 0;
	int biggest = 0;

	if (n1 < n2)
	{
		smallest = n1;
		biggest = n2;
	}
	else
	{
		biggest = n1;
		smallest = n2;
	}

	while (smallest <= biggest)
	{
		std::cout << smallest << "\n";
		smallest++;
	}
}