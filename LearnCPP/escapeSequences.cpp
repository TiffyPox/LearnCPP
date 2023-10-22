#include <iostream>

int main()
{
    std::cout << "Bonjour, je m'appelle Tiffany\n" << "\v...et je suis trente deux ans." << "\tDaniel est mon mari.";

    char a = 84;

    std::cout << "\n\x48\x49 " << a << "\127\111" << a << a << "\x45\x52" << std::endl;

    return 0;
}