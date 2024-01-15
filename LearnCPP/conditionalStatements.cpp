#include <iostream>
#include <vector>
#include <string>

int main()
{
    int grade = 0;

    const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};

    std::cout << "Please input student's score: " << std::endl;

    // get grade
    std::cin >> grade;

    // if grade is less than 60, it's an F, otherwise compute a subscript
    std::string letterGrade;

    if (grade <= 60)
    {
        letterGrade = scores[0];
    }
    else
    {
        letterGrade = scores[(grade - 50) / 10];

        if (grade != 100)
        {
            if (grade % 10 > 7)
            {
                letterGrade += '+';
            }
            else if (grade % 10 < 3)
            {
                letterGrade += '-';
            }
        }
    }

    std::cout << "Student's grade is " << letterGrade << std::endl;

    return 0;
}