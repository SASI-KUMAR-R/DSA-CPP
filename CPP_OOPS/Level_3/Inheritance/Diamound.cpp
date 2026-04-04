#include <iostream>

class A
{
public:
    void name()
    {
        std::cout << "This is name of a \n";
    }
};

class B : virtual public A
{
// public:
    // void name()
    // {
    //     std::cout << "This is name of b \n";
    // }
};

class C : virtual public A
{
// public:
//     void name()
//     {
//         std::cout << "This is name of c \n" ;
//     }
};

class D : public B , public C {

};

int main()
{
    D d ;
    d.name();
}