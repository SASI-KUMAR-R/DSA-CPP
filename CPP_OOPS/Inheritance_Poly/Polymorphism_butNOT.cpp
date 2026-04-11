#include <iostream>
using namespace std;

// This is not exact polymorphism ...

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks\n";
    }
};

int main()
{
    Animal *a = new Dog(); // pointing to animals ....
    a->sound();
}