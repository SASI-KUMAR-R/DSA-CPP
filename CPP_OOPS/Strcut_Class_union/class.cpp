#include <iostream>

// default -> Private
class Student
{
public:
    std::string name;
    int rollno;
};

int main()
{
    Student s;
    s.name = "SASIKUMAR";
    s.rollno = 123;
    return 0;
}