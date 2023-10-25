#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
    std::cout << "Give me a sentence about a superhero doing an action!" <<
    " (e.g. \"Spiderman dancing\")" << std::endl;

    std::string superhero;

    if (std::cin >> superhero)
    {
        std::string curr = superhero;

        while (std::getline(std::cin, superhero))
        {
            curr += superhero;
        }

        std::string story = "Batman walked in on " + curr + " with Robin";

        std::cout << story << std::endl;
    }
    else
    {
        std::cerr << "Error! No data was entered" << std::endl;
        return -1;
    }
    
    return 0;
}