#include <iostream>
#include <vector>

void printVector(const std::vector<std::string>& s)
{
    int count = s.size();

    std::cout << "Vector size - " << count << std::endl;

    std::cout << "Vector contents - ";

    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it != s.end() - 1)
        {
            std::cout << *it << ", ";
        }
        else
        {
            std::cout << *it << ". " << std::endl;
        }
    }
}

int main()
{
    std::vector<std::string> songs = {"400 Bones", "Roadless", "Things"};

    printVector(songs);

    std::cout << "Add another song to the list!" << std::endl;

    std::string input;

    std::cin >> input;

    songs.push_back(input);

    printVector(songs);
    
    return 0;
}