#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
	/*
	* Although we can use a subscript to access the characters of a string, there is a more general mechanism
	* known as iterators that we can use for the same purpose
	*/

	/*
	* Unlike pointers, we do not use the address-of operator to obtain an iterator. Instead, types that have iterators
	* have members that return iterators. In particular, these types have members named begin and end:
	*/

	std::string s("hello...");

	// the compiler determines the type of b and e from whatever type is returned from the begin and end members
	auto b = s.begin(); // denotes the first element
	auto e = s.end(); // denotes one past the last element in v

	// if the container is empty, the iterators returned by begin and end are equal - they are both off-the-end iterators

	if (b != e) // make sure s is not empty
	{
		auto it = s.begin(); // it denotes the first character in s
		*it = toupper(*it); // change that character to uppercase
	}

	std::string s1("world");

	for (auto it = s1.begin(); it != s1.end() && !isspace(*it); it++)
	{
		*it = toupper(*it);
	}

	// print the vectors
	for (auto c : s)
	{
		std::cout << c;
	}

	for (auto c : s1)
	{
		std::cout << c;
	}

	return 0;
}