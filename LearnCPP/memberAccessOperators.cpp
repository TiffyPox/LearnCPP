#include <iostream>
#include <string>
#include <vector>

int main()
{
    // the dot operator fetches a member from an object of class type
    // arrow is defined so that ptr->mem is a synonym for (*ptr).mem

    std::string s1 = "a string"; 
    std::string *p1 = &s1;

    auto n = s1.size(); // run the size member of s1
    n = (*p1).size(); // run size on the object to which p points
    n = p1->size(); // equivalent to (*p).size()

    // because dereference has a lower precedence than dot, we must paranthesize the dereference subexpression
    // *p.size(); // error: p is a pointer and has no member named size

    /*
    * this expression attempts to fetch the size member of the object p
    * however, p is a pointer, which has no members
    */

   // exercises
   std::vector<std::string> text {"Hello Twitter!"};

   std::vector<std::string>::iterator iter;

   iter = text.begin();

   if (iter != text.end() && !(*iter).empty())
   {
    std::cout << *iter++ << std::endl;
   }

   auto e = text.empty();
   e = iter->empty();

   if (!e)
   {
    std::cout << "String is not empty!" << std::endl;
   }
   
   return 0;
}