#include <iostream>
#include <string>

// Constructors - > Cleaning Process .  


class Car {
    public : 
        Car() // Default Constructor
        {
            std::cout << "Car Objects Created " << std::endl ; 
        }

        ~Car() 
        {
            std::cout << "Car Objects Deleted " << std::endl ; 
        }
};

int main()
{
    Car c1 ; 
    c1.~Car() ; 
}
