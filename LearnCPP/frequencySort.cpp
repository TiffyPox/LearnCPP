#include <iostream>
#include <set>

int main()
{
    // unsorted array
    int arr[9] = { 2, 9, 9, 4, 2, 9, 4, 1, 7 }; // 9, 9, 9, 2, 2, 4, 4, 1, 7
    int frequencySorted[9] = { };

    std::set<int> sorted { };

    int num = 0;

    int numFrequency = 0;
    int maxFrequency = 0;
    int maxFrequencyNum = 0;
    int currPos = 0;
    bool hasFrequency = false;

    while(true)
    {
        for (int i = 0; i < 9; ++i)
        {
            if(sorted.find(arr[i]) != sorted.end())
            {
                continue;
            }

            numFrequency = 1;
            for(int j = 0; j < 9; ++j)
            {
                if(arr[j] == arr[i])
                {
                    ++numFrequency;
                }
            }

            if(numFrequency > maxFrequency)
            {
                hasFrequency = true;
                maxFrequency = numFrequency;
                maxFrequencyNum = arr[i];
            }
        }

        if(hasFrequency)
        {
            sorted.insert(maxFrequencyNum);

            for(int i = currPos; i < currPos + maxFrequency; ++i)
            {
                frequencySorted[i] = maxFrequencyNum;
            }

            currPos += maxFrequency - 1;
        }
        else
        {
            break;
        }

        maxFrequencyNum = 0;
        hasFrequency = false;
        maxFrequency = 0;
        numFrequency = 0;
    }

    for(int i = 0; i < 9; ++i)
    {
        std::cout << frequencySorted[i] << " ";
    }
    
    return 0;
}