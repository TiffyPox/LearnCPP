#include <iostream>
#include <ostream>

int main()
{
	// This is a single-line comment
	std::cout << "Single-line comments are used for single-line remarks";

	/*
	* This is a comment pair
	* Generally used for multiline explanations
	*/

	// /*
	// * comment pairs /* */cannot nest
	// * "cannot nest" is considered source code,
	// * as is the rest of this program
	// */
	
	// /* 
	// *everything inside a single-line comment is ignored
	// *including nested comment pairs
	// */
}