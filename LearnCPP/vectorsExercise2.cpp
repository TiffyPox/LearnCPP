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
	// Write a program that reads a sequence of strings from std::cin and stores those values in a vector

	std::cout << "Please give me a list of words: " << std::endl;

	std::vector<std::string> words{};

	std::string word; 

	while (std::cin >> word)
	{
		words.push_back(word);
	}

	std::cout << "Here is the list of words you gave: " << std::endl;

	printVector(words);

	return 0;
}