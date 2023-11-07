#include <vector>
#include <iostream>

bool areEqual(const std::vector<int> &v1, const std::vector<int> &v2)
{
    if (v1.size() != v2.size())
    {
        std::cout << "Vectors are not the same size" << std::endl;

        return false;
    }

    for (int i = 0; i <= v1.size(); i++)
    {  
        int first = v1[i];
        int second = v2[i];

        if (first != second)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Write a program to check two vectors for equality

    std::vector<int> n { 1, 2, 3, 4, 5 };
    std::vector<int> n1 { 1, 2, 3, 4, 6 };

    if (n != n1)
    {
        std::cout << "Vectors are not equal" << std::endl;
    }
    else
    {
        std::cout << "Vectors are equal" << std::endl;
    }

    // That was too easy so let's try this...

    std::vector<int> v1 { 2, 4, 6, 8 };
    std::vector<int> v2 { 3, 4, 5 };

    if (areEqual(v1, v2))
    {
        std::cout << "Vectors are equal" << std::endl;
    }
    else
    {
        std::cout << "Vectors are not equal" << std::endl;
    }

    return 0;
}