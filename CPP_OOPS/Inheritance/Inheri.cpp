#include <iostream>

// Base Class
class Youtube
{
private:
    std::string Name;
    std::string OwnerName;

protected:
    int count;

public:
    Youtube(std::string Name, std::string OwnerName)
    {
        this->Name = Name;
        this->OwnerName = OwnerName;
        count = 0;
    }

    void getInfo()
    {
        std::cout << Name << " -- " << OwnerName << std::endl;
    }

    void checkcount()
    {
        std::cout << count << std::endl;
    }
};

// Derived Class 1
class CookingChannel : public Youtube
{

public:
    CookingChannel(std::string Name, std::string OwnerName) : Youtube(Name, OwnerName) {}

    void subscriber()
    {
        count++;
    }
};

// Derived Class 2
class SigningChannel : public Youtube
{

public:
    SigningChannel(std::string Name, std::string OwnerName) : Youtube(Name, OwnerName) {}

    void subscriber()
    {
        count++;
    }
};

int main()
{
    CookingChannel yt1("sasiDraws", "sasikumar");
    yt1.getInfo();
    yt1.subscriber();
    yt1.subscriber();
    yt1.subscriber();
    yt1.subscriber();
    yt1.subscriber();

    SigningChannel yt2("sasiSigning", "sasikumar");
    yt2.getInfo();
    yt2.subscriber();
    yt2.subscriber();
    yt2.subscriber();
    yt2.subscriber();
    yt2.subscriber();
    yt2.subscriber();

    Youtube* ytp1 = &yt1 ;
    Youtube* ytp2 = &yt2 ;

    ytp1->checkcount() ; 
    ytp2->checkcount() ; 
}