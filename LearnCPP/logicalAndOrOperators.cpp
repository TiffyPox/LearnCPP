#include <iostream>
#include <string>

int main()
{
    // the logical AND and OR operators always evaluate their left operand before the right
    // the right operand is evaluated if and only if the left operand does not determine the result

    std::string text = "Hello World How Are You?";

    int index = 0;

    // checks that index has not reached the end of its associated string
    // it is guaranteed that the right operand won't be evaluated unless index is in range
    index != text.size() && !isspace(text[index]);

    for (const auto &s : text)
    {
        std::cout << s;

        if (s != text.size() && !isspace(s))
        {
            std::cout << " ";
        }
        else
        {
            std::cout << std::endl;
        }
    }

    return 0;
}