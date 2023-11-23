#include <iostream>
#include <string>
#include <vector>

int main()
{
    // the dot operator fetches a member from an object of class type
    // arrow is defined so that ptr->mem is a synonym for (*ptr).mem

    std::string s1 = "a string"; 
    std::string *p1 = &s1;

    auto n1 = s1.size(); // run the size member of s1
    n1 = (*p1).size(); // run size on the object to which p points
    n1 = p1->size(); // equivalent to (*p).size()

    // because dereference has a lower precedence than dot, we must paranthesize the dereference subexpression
    // *p.size(); // error: p is a pointer and has no member named size

    /*
    * this expression attempts to fetch the size member of the object p
    * however, p is a pointer, which has no members
    */

    // exercises
    std::vector<std::string> text1 {"Hello Twitter!"};

    std::vector<std::string> text2 {"How are you?"};

    std::vector<std::string>::iterator iter1;

    std::vector<std::string>::iterator iter2;

    iter1 = text1.begin();
    iter2 = text2.begin();

    if (iter1 != text1.end() && !(*iter1).empty())
    {  
        std::cout << *iter1++ << std::endl;
    }

    auto e = text1.empty();
    auto f = text2.empty();
    
    e = iter1->empty();
    f = iter2++->empty();

    if (!e || !f)
    {
        std::cout << "String is not empty!" << std::endl;
    }

    return 0;
}