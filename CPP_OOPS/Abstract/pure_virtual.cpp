#include <iostream>

class Instrument
{
public:
    virtual void sound() = 0;
};

class Flute : public Instrument
{
public:
    void sound()
    {
        std::cout << "This is from the Flute sound \n";
    }
};

class Piano : public Instrument
{
public:
    void sound()
    {
        std::cout << "This is from the Piano sound \n";
    }
};

int main()
{
    Instrument *I1 = new Flute();
    Instrument *I2 = new Piano();

    Instrument *instrument[] = {I1, I2};
    for (int i = 0; i < 2; i++)
    {
        instrument[i]->sound();
    }
    return 0;
}