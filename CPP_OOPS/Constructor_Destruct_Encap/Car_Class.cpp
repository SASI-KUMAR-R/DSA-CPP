#include <iostream>
#include <string>

class Car {
    public : 
        std::string name ; 
        int speed ; 

        void display()
        {
            std::cout << name << " - " << speed << std::endl ;
        }
};

int main()
{
    Car c1 ; // Object 
    c1.name = "Maruthi" ; 
    c1.speed = 150 ; 
    c1.display() ; 
}