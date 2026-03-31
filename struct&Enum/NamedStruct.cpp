#include <iostream>
#include <string>
using namespace std;

struct students
{
    string name;
    int age;
    long int phone;
    string department;
};

int main()
{
    students s1;
    students s2;

    s1.name = "SASI";
    s1.age = 20;
    s1.phone = 9345054049;
    s1.department = "ECE";

    s2.name = "Siva";
    s2.age = 20;
    s2.phone = 1234567890;
    s2.department = "ECE";

    cout << s1.name << endl;
    cout << s2.name << endl;
}