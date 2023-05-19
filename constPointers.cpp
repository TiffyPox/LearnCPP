#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// const Pointers

	int errNumb = 0;
	int *const currErr = &errNumb; // currErr will always point to errNumb
	const double pi = 3.14159;
	const double *const pip = &pi; // pip is a const pointer to a const object

	/*
	* pip is a const pointer to const, neither the value of the object addressed by pip nor the address stored in pip can be changed
	* On the other hand, currErr addresses a plain, nonconst int, so we can use currErr to change the value of errNumb:
	*/

	*pip = 2.72; // error: pip is a pointer to const
	// if the object to which currErr points (i.e. errNumb) is nonzero
	if (*currErr)
	{
		errorHandler();
		*currErr = 0; // reset the value of the object to which currErr is bound
	}

}