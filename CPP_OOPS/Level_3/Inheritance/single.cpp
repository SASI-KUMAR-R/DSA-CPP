#include <iostream>

class A
{
public:
    virtual void name()
    {
        std::cout << "This is name of a ";
    }
};

class B : public A
{
public:
    void name()
    {
        std::cout << "This is name of b ";
    }
};

int main()
{
    A* b = new B();
    b->name();
    return 0;
}