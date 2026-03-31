#include<iostream>
#include<string>
using namespace std ; 

struct                   // struct declration
{
    string name ; 
    int age ;
    float cgpa ;
} students ;  // struct varible ...

int main()
{
    students.name = "SASIKUMAR";
    students.age = 20 ; 
    students.cgpa = 8.69 ; 

    cout << students.age << endl ; 
}