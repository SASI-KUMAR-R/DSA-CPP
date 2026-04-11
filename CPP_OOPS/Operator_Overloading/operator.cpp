#include <iostream>
#include <list>

struct Youtube
{
    std::string name;
    int subscriber;
    Youtube(std::string name, int subscriber)
    {
        this->name = name;
        this->subscriber = subscriber;
    }
};

struct MyCollection
{
    std::list<Youtube> mychannels ; 

    void operator+=(Youtube& yt)
    {
        this->mychannels.push_back(yt) ; 
    }
};


// Operator Overloading -- Conditions (naming must be "operator" followed by "<< or += or >> ") **** Note some operator only be overload ****
std::ostream &operator<<(std::ostream &COUT, Youtube &yt1)
{
    COUT << "Name : " << yt1.name << std::endl;
    COUT << "Subscriber : " << yt1.subscriber << std::endl;

    return COUT;
}

int operator+(Youtube &yt1, Youtube &yt2)
{
    return yt1.subscriber + yt2.subscriber;
}

int main()
{
    Youtube yt1("Youtube 1 ", 12000);
    Youtube yt2("Youtube 2 ", 12000);
    std::cout << "Total Subs : -> " << yt1 + yt2 << std::endl; // addition
    std::cout << yt1 << yt2; // printing the struct 

    MyCollection listchannel ; 
    listchannel += yt1 ; 
    listchannel += yt2 ; 


    for(Youtube i : listchannel.mychannels)
    {
        std::cout << i.name ; 
    }
    return 0;
}

// cout -> error getting la due cout don't know how to print the struct or class
// in java we directly use "tostring" method to print the class with our println