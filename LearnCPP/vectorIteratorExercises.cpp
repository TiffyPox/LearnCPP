#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printVectorInt(const std::vector<int>& vi)
{
	int count = vi.size();
	std::cout << "\nVector Size: " << count << std::endl;

	std::cout << "Vector Contents: ";

	for (auto it = vi.begin(); it != vi.end(); it++)
	{
		std::cout << *it << " ";
	}
}

void printVectorString(const std::vector<std::string>& vs)
{
	int count = vs.size();
	std::cout << "\nVector Size: " << count << std::endl;

	std::cout << "Vector Contents: ";

	for (auto it = vs.begin(); it != vs.end(); it++)
	{
		std::cout << *it << " ";
	}
}

int main()
{
	// Write a program that prints the size and contents of a list of vectors using iterators

	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{10};
	std::vector<int> v5{10, 42};

	std::vector<std::string> v6{10};
	std::vector<std::string> v7{10, "Hi"};

	printVectorInt(v1);
	printVectorInt(v2);
	printVectorInt(v3);
	printVectorInt(v4);
	printVectorInt(v5);

	printVectorString(v6);
	printVectorString(v7);

	// Using an iterator, change this string to uppercase

	std::string text("hello my name is tiffany");

	for (auto it = text.begin(); it != text.end(); it++)
	{
		*it = toupper(*it);
	}

	std::cout << "\n" << text << std::endl;

	// Create a vector with ten int elements, using an iterator assign each element a value that is twice its current value

	std::vector<int> ten{2, 20, 13, 55, 32, 10, 8, 15, 30, 22};

	for (auto it = ten.begin(); it != ten.end(); it++)
	{
		int doubleTen = *it * 2;

		std::cout << doubleTen << " "; 
	}

	return 0;
}