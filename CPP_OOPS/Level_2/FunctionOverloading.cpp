#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main()
{
    Math m1 ; 
    
    // Compiler decides based on arguments
    std::cout << m1.add(5,5) << "\n" ;
    std::cout << m1.add(5.5,5.5) << "\n" ;
    std::cout << m1.add(5,5,5) << "\n" ;
}