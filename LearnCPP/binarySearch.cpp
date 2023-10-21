#include <iostream>
#include <ostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int FindLocker(const std::vector<int>& vector, int searchValue)
{
    std::cout << "Searching for value: " << searchValue << std::endl;
    
    int first = 0;
    int last = static_cast<int>(vector.size() - 1);
    
    while (first <= last)
    {
        const int middle = (first + (last)) / 2;
        const int middleNum = vector[middle];
		
        // check if key is present at mid
        if (middleNum == searchValue)
        {
            return middle;
        }

        if (middleNum < searchValue)
        {
            first = middle + 1;
        }
        else // if key is smaller, ignore second half
        {
            last = middle - 1;
        }
    }

    return -1;
}

void SortVector(std::vector<int>& vector)
{
    std::cout << "Sorting vector" << std::endl;
    std::sort(vector.begin(), vector.end(), [](int a, int b) -> bool
    {
        return a < b;
    });
    std::cout << std::endl;
}
void OutputVector(const std::vector<int>& vector)
{
    for(const int& a : vector)
    {
       std::cout << a; 
    }

    std::cout << std::endl;
}

int main()
{
    std::cout << "Beginning program" << std::endl;
	
    std::vector<int> lockers{7, 3, 4, 1, 6, 8, 2, 9};
    SortVector(lockers);
    OutputVector(lockers);
    
    constexpr int key = 7;
    const int result = FindLocker(lockers, key);

    for(int i = 0; i <= result; ++i)
    {
        if( i == result )
        {
            std::cout << "V" << std::endl;
        }
        else
        {
            std::cout << " ";
        }
    }

    for(const int& a : lockers)
    {
        std::cout << a;
    }
    std::cout << std::endl;
    
    if( result == -1 )
    {
        std::cout << "Locker is not present";
    }
    else
    {
        std::cout << "Locker was found at index " << result;   
    }
    
    return 0;
}