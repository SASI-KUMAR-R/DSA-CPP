#include <iostream>

class Base 
{
    public :
        void display_Base()
        {
            std::cout << " Base \n" ; 
        }
};

class Derived : public Base
{
    public : 
        void display_Derived()
        {
            std :: cout << " Derived \n" ; 
        }
} ; 

int main()
{
    Derived d1 ; 
    d1.display_Base();
    d1.display_Derived() ; 
}