#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
	std::vector<int>::iterator it; // it can read and write vector<int> elements
	std::string::iterator it2; // it2 can read and write characters in a string

	std::vector<int>::const_iterator it3; // it3 can read but NOT write elements
	std::string::const_iterator it4; // it4 can read but NOT write characters

	// Like a pointer to const, a const_iterator may read but NOT write the elements it denotes
	// An object of type iterator can both read and write
	// If a vector or string is const, we may only use its const_iterator type
	// With a nonconst vector or string, we can use either iterator or const_iterator

	std::vector<int> v{};

	// It is usually best to use a const type when we need to read but do not need to write to an object:
	auto it5 = v.cbegin(); // it5 has type vector<int>::const_iterator

	// When we dereference an iterator, we get the object that the iterator denotes
	
	const std::vector<std::string> text{"Hello my name is Tiffany"};

	// (*it).empty(); dereferences it and calls the member empty on the resulting object
	// to simplify expressions such as this, we can use the arrow operator (the -> operator)
	// it->mem is a synonym for (*it).mem

	// print each line in text up to the first blank line
	for (auto i = text.cbegin(); i != text.cend() && !i->empty(); i++)
	{
		std::cout << *i << std::endl;
	}

	return 0;
}