#include <iostream>
#include <string>

class Vehicle // Base (basic features )
{
    public : 
        void Engine()
        {
            std :: cout << "Engine Aviable \n" ; 
        }

        void seat()
        {
            std :: cout << "Vechicle have 4 seat \n " ; 
        }
};

class Car : public Vehicle // Derived (we defined some but we can change it . )
{
    public : 
        void seat()
        {
            std :: cout << "Vehicle have 7 seat \n" ; 
        }

};

int main()
{
    Car c1 ; 
    c1.seat();
    c1.Engine();
}