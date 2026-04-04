#include <iostream>

class EqualTriangle {
private:
    int a;
    float area;
    int circumference;

public:
    void SetA(int a)
    {
        this->a = a;
        area = (1 * 73 * a * a) / 4;
        circumference = a * 3;
    }

    // To access the private varible to some friends only .... 
    friend void printResults(EqualTriangle) ; 
};

void printResults(EqualTriangle et)
{
    std::cout << "Circumferece : " << et.circumference << std::endl;
    std::cout << "Area : " << et.area << std::endl;
}

int main()
{
    EqualTriangle et ; 
    et.SetA(3) ; 

    printResults(et) ; 

    return 0;
}