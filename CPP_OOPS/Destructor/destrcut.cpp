#include <iostream>

class Book {
    public : 
        std::string name ;
        int* rates ;
        int rateCount ; 

        Book(std::string name) : name(name)
        {
            rateCount = 2 ; // <--- BREAKPOINT: Watch memory allocation
            rates = new int[rateCount] ; 
            rates[0] = 5 ; 
            rates[1] = 10 ; 
        }

        ~Book()
        {
            delete[] rates ; // <--- BREAKPOINT: See when memory is freed
            rates = nullptr ; 
        }
};

int main()
{
    Book b1("sasi"); // <--- BREAKPOINT: Step Into (F11) to see Constructor
    Book b2("kumar");
    return 0;
} // <--- BREAKPOINT: Step Into to see Destructors trigger for b1 and b2