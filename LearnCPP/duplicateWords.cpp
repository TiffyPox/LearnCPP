#include <iostream>
#include <string>
#include <map>

int main()
{
    // write a program to read strings from standard input looking for the maximum duplicate words
    // for example, if the input is how now now now brown cow cow
    // the output should indicate that the word now occurred three times

    std::map<std::string, int> words;

    std::string word;

    std::cout << "Please input a series of words each separated by a space" << std::endl;

    // cow cow cow cow now now hi hi hi

    while (std::cin >> word)
    {
        ++words[word];
    }

    std::string mostFrequent;

    int count = 0;

    for (const auto& pair : words) 
    {
        if (pair.second > count)
        {
            count = pair.second;
            mostFrequent = pair.first;
        }
    }

    std::cout << "The word " << mostFrequent << " occurred " << count << " times" << std::endl;

    // The word cow occurred 4 times

    return 0;
}