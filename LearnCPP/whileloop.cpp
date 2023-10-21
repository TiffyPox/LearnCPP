
#include <iostream>
#include <ostream>

int main()
{
	int num = 10;

	// keep executing the while as long as num is less than or equal to 10
	while (num <= 10 && num >= 0)
	{
		std::cout << num << "\n";
		--num;
	}
}