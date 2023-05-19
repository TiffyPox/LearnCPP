#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	/*
	* We can make a variable unchangeable by defining the type as const
	* It must be initialized when created
	*/

	const int i = get_size(); // initialized at run time
	const int j = 42; // initialized at compile time
	const int k; // error: k is an uninitialized const

	// legal uses of const; copying an object doesn't change that object
	int i = 42;
	const int ci = i; // the value in i is copied into ci
	int j = ci; // the value in ci is copied into j

	// To share a const object among multiple files, you must define the variable as extern:
	
	// file_1.cc
	extern const int height = 1200; // defines and initializes a const that is accessible to other files

	// file_1.h
	extern const int height; // same height as defined in file_1.cc
}