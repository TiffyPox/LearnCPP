#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printVectorInt(const std::vector<int>& vi)
{
	// print size of vector:
	int count = vi.size();
	std::cout << "\nVector size: " << count << std::endl;

	// print contents of vector:
	std::cout << "Vector contents: ";

	for (size_t i = 0; i != vi.size(); i++)
	{
		std::cout << vi[i] << " ";
	}
}

void printVectorString (const std::vector<std::string>& vs)
{
	// print size of vector:
	int count = vs.size();
	std::cout << "\nVector size: " << count << std::endl;

	// print contents of vector:
	std::cout << "Vector Contents: ";

	for (size_t i = 0; i != vs.size(); i++)
	{
		std::cout << vs[i] << " ";
	}
}

int main()
{
	// Write a program that prints the size and contents of a list of vectors:

	std::vector<int> v1; // empty vector
	std::vector<int> v2(10); // a vector that holds ten elements initialized to 0
	std::vector<int> v3(10, 42); // ten elements each initialized to 42
	std::vector<int> v4{10}; // a vector that holds one element initialized to 10
	std::vector<int> v5{10, 42}; // a vector that holds two elements initialized to 10 and 42

	std::vector<std::string> v6{10}; // a vector of ten elements, default initialized
	std::vector<std::string> v7{10, "Hi"}; // a vector of ten elements, each initialized to "Hi"

	printVectorInt(v1);
	printVectorInt(v2);
	printVectorInt(v3);
	printVectorInt(v4);
	printVectorInt(v5);

	printVectorString(v6);
	printVectorString(v7);

	return 0;
}