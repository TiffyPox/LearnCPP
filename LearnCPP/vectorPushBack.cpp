#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printVector(const std::vector<std::string>& s)
{
	for (size_t i = 0; i != s.size(); i++)
	{
		std::cout << s[i] << std::endl;
	}
}

int main()
{
	std::vector<std::string> v6{"Hi", "Bye", "Goodnight"};
	
	v6.push_back("Good Morning"); // adding an element to an existing vector

	// printing the elements of the vector:
	printVector(v6);

	// asking the user to add their own element to the vector:
	std::cout << "\nAdd another greeting to this list:\n" << std::endl;

	std::string newGreeting;

	getline(std::cin, newGreeting);

	v6.push_back(newGreeting);

	// printing the updated vector:
	printVector(v6);

	return 0;
}