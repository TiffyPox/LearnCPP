#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

int main()
{
    // write a program to read strings from standard input looking for the maximum duplicate words
    // for example, if the input is how now now now brown cow cow
    // the output should indicate that the word now occurred three times

    std::string word;

    std::vector<std::string> words;

    int count = 0;

    std::cout << "Please input a series of words each separated by a space" << std::endl;

    while (std::cin >> word)
    {
        words.push_back(word); 

        for (auto i = words.begin(); i != words.end() - 1; ++i)
        {
            std::string temp = *i;
            std::string next = *(i + 1);

            if (temp == next)
            {
                count++;
            }
        }
    }

    std::cout << "The word " << word << " occurred " << count << " times!" << std::endl;

    return 0;
}