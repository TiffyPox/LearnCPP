#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

int main()
{
	// Assignment for strings

	std::string str1(5, 'e'); // str1 is eeeee
	std::string str2; // str2 is an empty string

	str1 = str2; // assignment: replace contents of str1 with a copy of str2. Both str1 and str2 are now empty strings

	// Adding two strings

	std::string s1 = "Hello,";
	std::string s2 = " World!";
	std::string s3 = s1 + s2;

	s1 += s2; // equivalent to s1 = s1 + s2;

	std::cout << s1 << std::endl;

	// Adding literals and strings

	std::string a1 = "What's";
	std::string a2 = "up?";
	std::string a3 = a1 + " " + a2 + "\n";

	std::cout << a3;

	// at least one operand to each operator must be of string type:
	std::string a4 = a1 + " "; // ok: adding a string and a literal
	std::string a5 = "Hello" + " "; // error: no string operand
	std::string a6 = a1 + " " + "World!"; // ok: each + has a string operand
	std::string a7 = "Hello" + " " + s2; // error: can't add string literals

	return 0;
}