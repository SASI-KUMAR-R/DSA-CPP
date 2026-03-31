#include <iostream>
#include <string>

// Constructors - > it is special "method(function)" of class that automatically called when the objects is created .

// Types - > Default and Parameterized

// Constructors Must BE -- Public

class Car
{
public:
    std::string name;
    int chasisNumber;

    Car(std::string name, int chasisNumber) // Parameterized Constructor
    {
        this->name = name;
        this->chasisNumber = chasisNumber;
    }

    void display()
    {
        std::cout << name << " - " << chasisNumber << std::endl;
    }
};

int main()
{
    Car c1("Maruthi", 1234567890);
    c1.display() ; 
}