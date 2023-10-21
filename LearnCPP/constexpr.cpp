#include <iostream>
#include <ostream>
#include <cstdlib>

int main()
{
	// A constant expression is an expression whose value cannot change and that can be evaluated at compile time

	// Whether a given object (or expression) is a constant expression depends on the types and initializers:
	const int max_files = 20; // max_files is a constant expression
	const int limit = max_files + 1; // limit is a constant expression
	int staff_size = 27; // staff_size is not a constant expression 
	const int sz = get_size(); // sz is const but is NOT a constant expression because the value of its initializer is not known until run time

	// Under the new standard, we can declare a variable as constexpr. These variables are implicity const and must be initialized by a constant expression:
	constexpr int mf = 20; // 20 is a constant expression
	constexpr int limit = mf + 1; // mf + 1 is a constant expression
	constexpr int sz1 - size(); // ok only if size is a constexpr function
}