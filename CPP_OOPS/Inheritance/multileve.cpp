#include <iostream>

class A
{
public:
    void name()
    {
        std::cout << "This is name of a \n";
    }
};

class B : public A
{
public:
    void name()
    {
        std::cout << "This is name of b \n";
    }
};

class C :  public B
{
public:
    void name()
    {
        std::cout << "This is name of c \n" ;
    }
};

int main()
{
    C c;
    c.name();
}