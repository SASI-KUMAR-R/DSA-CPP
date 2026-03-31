#include <iostream>
#include <string>
using namespace std;

class Students
{
    private: // Access Specifier ...
    int rollno;
    string name ;
    
    public: // access specifier ...
    Students(string name , int rollno)
    {
        this->name = name ; 
        this->rollno = rollno ;
    }
    void setname(string name) // setter
    {
        this->name = name ; 
    }
    void setrollno(int rollno) // setter 
    {
        this->rollno = rollno;
    }
    void display() // getter 
    {
        cout << rollno << " " << name << endl ; 
    }
};

int main()
{
    Students s1("sasi",144) ; 
    s1.display();
    s1.setname("kumar");
    s1.setrollno(143);
    s1.display();
}

/*
Encapsulation ->
1. Wrapping up a data,attritubes,method in single entity .. 
2. restrict access of the object (attributes)
3. accessing the attributes through GETTER & SETTER
*/