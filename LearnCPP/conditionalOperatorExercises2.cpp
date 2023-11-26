#include <iostream>
#include <string>
#include <vector>

int main()
{
    // extending the student grade program using only conditional operators

    int grade = 0;

    std::cout << "Please provide students grade" << std::endl;

    std::cin >> grade;

    std::string result = (grade > 90) ? "High Pass"
                                      : (grade >= 60 && grade < 75) ? "Low Pass"
                                      : (grade < 60) ? "Fail" : "Pass";
    
    std::cout << result << std::endl;

    // extending the student grade program using if statements

    if (grade > 90)
    {
        result = "High Pass";
    }
    else if (grade > 75)
    {
        result = "Pass";
    }
    else if (grade >= 60 && grade < 75)
    {
        result = "Low Pass";
    }
    else
    {
        result = "Fail";
    }

    std::cout << result << std::endl;

    // adding a letter to the end of a word using a conditional operator

    std::string s1 = "word";

    std::string p1 = s1 + (s1[s1.size() - 1] == 's' ? "" : "s");

    std::cout << p1 << std::endl;

    // and again

    std::vector<std::string> s2 = {"C", "Plus"};

    std::string language = s2[3] = "" ? (s2[3] = "Plus") : "";

    std::cout << s2[0] << s2[1] << s2[3] << std::endl;

    return 0;
}