#include <iostream>

// using declaration must be added for each name and must end with a semicolon
using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	int val = 50;

	while (val <= 100)
	{
		sum += val;
		++val;
	}

	cout << "Sum of 50 to 100 is: " << sum << endl;

	return 0;
}