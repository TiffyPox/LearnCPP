#include <iostream>
#include <string>

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
    std::string result2;

    if (grade > 90)
    {
        result2 = "High Pass";
    }

    if (grade >= 60 && grade < 75)
    {
        result2 = "Low Pass";
    }
    else
    {
        result2 = "Pass";
    }

    if (grade < 60)
    {
        result2 = "Fail";
    }

    std::cout << result2;

    return 0;
}