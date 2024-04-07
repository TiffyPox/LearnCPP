#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    // write a program using a series of if statements to count the number of vowels in text read from cin
    // modify the program so that it counts both lower and upper case letters

    std::string text;

    unsigned aCnt = 0;
    unsigned eCnt = 0;
    unsigned iCnt = 0;
    unsigned oCnt = 0;
    unsigned uCnt = 0;
    unsigned otherCnt = 0;

    // modify the program to count blank spaces, tabs and new lines
    unsigned spaceCnt = 0;
    unsigned tabCnt = 0;
    unsigned newLineCnt = 0;

    // modify the program further to count the occurrences of the following two-char sequences: ff, fl, fi
    unsigned ffCnt = 0;
    unsigned flCnt = 0;
    unsigned fiCnt = 0;

    while (getline(std::cin, text))
    {
        if (!text.empty())
        {
            std::cout << text << std::endl;
            
            for (auto i = text.begin(); i != text.end(); ++i)
            {
                char temp;

                temp = *i;
                char next = *(i + 1);

                if (temp == 'a' || temp == 'A')
                {
                    ++aCnt;
                }
                else if (temp == 'e' || temp == 'E')
                {
                    ++eCnt;
                }
                else if (temp == 'i' || temp == 'I')
                {
                    ++iCnt;
                }
                else if (temp == 'o' || temp == 'O')
                {
                    ++oCnt;
                }
                else if (temp == 'u' || temp == 'U')
                {
                    ++uCnt;
                }
                else if (temp == ' ')
                {
                    ++spaceCnt;
                }
                else if (temp == '\n')
                {
                    ++newLineCnt;
                }
                else if (temp == '\t')
                {
                    ++tabCnt;
                }
                else if (temp == 'f' && next == 'f')
                {
                    ++ffCnt;
                    ++otherCnt + 1;
                }
                else if (temp == 'f' && next == 'l')
                {
                    ++flCnt;
                    ++otherCnt + 1;
                }
                else if (temp == 'f' && next == 'i')
                {
                    ++fiCnt;
                    ++ otherCnt;
                }
                else
                {
                    ++otherCnt;
                }
            }
        }
    }
    
    std::cout << "Number of vowel a: " << aCnt << "\n";
    std::cout << "Number of vowel e: " << eCnt << "\n";
    std::cout << "Number of vowel i: " << iCnt << "\n";
    std::cout << "Number of vowel o: " << oCnt << "\n";
    std::cout << "Number of vowel u: " << uCnt << "\n";
    std::cout << "Number of other letters: " << otherCnt << "\n";
    std::cout << "Number of blank spaces: " << spaceCnt << "\n";
    std::cout << "Number of new lines: " << newLineCnt << "\n";
    std::cout << "Number of tabs: " << tabCnt << "\n";
    std::cout << "Number of sequence ff: " << ffCnt << "\n";
    std::cout << "Number of sequence fl: " << flCnt << "\n";
    std::cout << "Number of sequence fi: " << fiCnt << "\n";

    return 0;
}