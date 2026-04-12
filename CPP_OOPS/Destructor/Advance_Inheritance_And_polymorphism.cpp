#include <iostream>

class Student {
    public : 
        virtual ~Student() {}
        virtual void Study() = 0 ; 
};

class ProgammingStudent : public Student {
    public : 
        void Study() {
            std::cout << "This is Programming \n" ; 
        }
};

class ArtsStudent : public Student {
    public : 
        void Study() {
            std::cout << "This is Arts \n" ; 
        }
};

class GraphicsStudent : public Student {
    public : 
        void Study() {
            std::cout << "This is Graphics \n" ; 
        }
};

int main()
{

    Student* students[3] ; 
    students[0] = new ProgammingStudent() ; 
    students[1] = new ArtsStudent() ; 
    students[2] = new GraphicsStudent() ; 

    for(int i=0; i<3; i++)
    {
        students[i]->Study() ; 
    }

    for(int i=0; i<3; i++)
    {
        delete students[i] ;
    }

    return 0;
} 