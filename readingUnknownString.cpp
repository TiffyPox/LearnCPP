#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "There seems to be an echo in here" << "\nThere seems to be an echo in here.." << endl;

	string word;
	
	while (cin >> word) // read until end-of-file
	{
		cout << word << endl; // write each word followed by a new line
	}

	return 0;
}