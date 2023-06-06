#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
	// Library vector Type

	/* 
	* A vector is often referred to as a 'container' because it contains other objects.
	* Every object in the collection has an associated index which gives access to that object
	*/

	std::vector<int> ivec; // default initialization; ivec has no elements

	// give ivec some values:
	std::vector<int> ivec2(ivec); // copy elements of ivec into ivec2
	std::vector<int> ivec3 = ivec; // copy elements of ivec into ivec3
	std::vector<string> svec(ivec2); // error: svec holds strings, not ints

	// another way to provide element values:
	std::vector<string> songs = {"Poke", "Holy", "Snake"};

	// list initialization:
	std::vector<string> a1{"Painting of a Panic Attack", "Pedestrian Verse", "The Midnight Organ Fight"};

	// we can also initialize a vector from a count and an element value:
	std::vector<int> i(10, -1); // ten int elements, each initialized to -1

	// note the use of parantheses and curly braces:
	std::vector<int> v1(10); // v1 has ten elements with value 0
	std::vector<int> v2{10}; // v2 has one element with value 10
	std::vector<int> v3(10, 1); // v3 has ten elements each with a value of 1
	std::vector<int> v4{10, 1}; // v4 has two elements with value 10 and 1

	return 0;
}