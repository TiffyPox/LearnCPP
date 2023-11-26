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

    return 0;
}