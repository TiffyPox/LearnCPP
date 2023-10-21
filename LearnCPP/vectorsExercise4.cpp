#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>

void printVector(const std::vector<std::string>& s)
{
	// Objective 3: Print the elements in the vector eight words to a line
	for (size_t i = 0; i != s.size(); i++)
	{
		if (i % 8 == 0)
		{
			std::cout << "\n" << s[i] << " ";
		}
		else
		{
			std::cout << s[i] << " ";
		}
	}
}

int main()
{
	// Objective 1: Read a sequence of words from cin and store the values in a vector

	std::vector<std::string> words{};

	std::cout << "Please give me a list of words, as many as you like:" << std::endl;

	std::string word;

	while (std::cin >> word)
	{
		// Objective 2: Change each word to uppercase
		for (decltype (word.size()) index = 0; index != word.size(); ++index)
		{
			word[index] = toupper(word[index]);
		}

		words.push_back(word);
	} 

	printVector(words);

	return 0;
}