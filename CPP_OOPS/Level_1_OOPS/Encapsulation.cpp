#include <iostream>
#include <string>

// Encapsulation -> Wrapping up a data inside the class , where the variable or function cannot directly access by user or main function 

class Car {
    private :  
        int chasis_number ; // Data Restricted 

    public : 
        std::string name ;

        void setChasisNumber(int chasis_number)
        {
            this->chasis_number = chasis_number ; 
        }

        int getChasisNumber()
        {
            return chasis_number ; 
        }


};

int main()
{
    Car c1 ; 

    c1.setChasisNumber(1234567890) ; 

    int chasis_Number_of_my_car = c1.getChasisNumber() ; 

    std::cout << "My Car Chasis Number -> " << chasis_Number_of_my_car << std::endl ;     
}
