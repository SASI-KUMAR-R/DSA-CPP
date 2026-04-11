#include <iostream>
#include <string>

// Constructors - > it is special "method(function)" of class that automatically called when the objects is created . 

// Types - > Default and Parameterized 

// Constructors Must BE -- Public 

class Car {
    public : 
        Car() // Default Constructor
        {
            std::cout << "Car Objects Created " << std::endl ; 
        }
};

int main()
{
    Car c1 ; 
}