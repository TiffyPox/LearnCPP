
#include <iostream>
#include <ostream>

int main()
{
	/*
	// for (int i = 10; i >= 0; --i)
	// {
	// 	std::cout << i << std::endl;
	// }
	*/

	int n1 = 0;
	int n2 = 0;

	std::cout << "Please give me a number: " << std::endl;
	std::cin >> n1;
	std::cout << "Please give me another number: " << std::endl;
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
		smallest = n2;
		biggest = n1;
	}

	for (int i = smallest; i <= biggest; ++i)
	{
		std::cout << i << std::endl;
	}
}