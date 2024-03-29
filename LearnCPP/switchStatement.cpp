#include <iostream>
#include <vector>

int main()
{
    unsigned aCnt = 0;
    unsigned eCnt = 0;
    unsigned iCnt = 0;
    unsigned oCnt = 0;
    unsigned uCnt = 0;
    unsigned otherCnt = 0;

    std::vector<char> letters = {'a', 'a', 'e', 'i', 'i', 'o', 'o', 'o', 'u', 't'};

    for (auto i = letters.begin(); i != letters.end(); ++i)
    {
        if (i == letters.end() - 1)
        {
            std::cout << *i << std::endl;
        }
        else
        {
            std::cout << *i << " ";
        }

        // if i is a vowel, increment the appropriate value

        switch(*i)
        {
            case 'a':
            ++aCnt;
            break;

            case 'e':
            ++eCnt;
            break;

            case 'i':
            ++iCnt;
            break;

            case 'o':
            ++oCnt;
            break;

            case 'u':
            ++uCnt;
            break;

            default:
            ++otherCnt;
            break;
        }
    }

    std::cout << "Number of vowel a: " << aCnt << "\n";
    std::cout << "Number of vowel e: " << eCnt << "\n";
    std::cout << "Number of vowel i: " << iCnt << "\n";
    std::cout << "Number of vowel o: " << oCnt << "\n";
    std::cout << "Number of vowel u: " << uCnt << "\n";
    std::cout << "Number of other letters: " << otherCnt << "\n";

    return 0;
}