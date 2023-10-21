#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// The decltype Type Specifier

	/* 
	* Sometimes we want to define a variable with a type that the compiler figures out from an expression
	* but do not want to use that expression to initialize the variable
	* decltype return the type of its operand
	*/

	// The compiler analyzes the expression to determine the type but does not evaluate the expression:
	decltype(f()) sum = x; // sum has whatever f returns

	// When the expression to which we apply decltype is a variable, decltype returns the type of that variable
	// including top-level const and references:
	const int ci = 0;
	const int &cj = ci;
	decltype(ci) x = 0; // x has type const int
	decltype(cj) y = x; // y has type const int& and is bound to x
	decltype(cj) z; // error: z is a reference and must be initialized

	// decltype of a paranthesized variable is always a reference:
	decltype((i)) d; // error: d is int& a must be initialized
	decltype (i) e; // ok: e is an (uninitialized) int
}