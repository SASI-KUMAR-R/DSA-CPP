#include <iostream>
using namespace std;

class SmartPhone
{
public:
    virtual void PowerButton() = 0;

    SmartPhone()
    {
        cout << "This is Abstract Constructor\n";
    }

    virtual ~SmartPhone() 
    { 
        cout << "This is Abstrach Destructor" ; 
    } // IMPORTANT
};

class Android : public SmartPhone
{
public:
    void PowerButton() override
    {
        cout << "Power Button Android\n";
    }
};

class Iphone : public SmartPhone
{
public:
    void PowerButton() override
    {
        cout << "Power Button Iphone\n";
    }
};

int main()
{
    SmartPhone *s1 = new Iphone();
    s1->PowerButton();

    delete s1; // avoid memory leak
    return 0;
}