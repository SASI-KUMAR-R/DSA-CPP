#include <iostream>

class Book
{
public:
    std::string title;
    std::string author;
    float *rates;
    int rateCount;

    // Constructor ...
    Book(std::string title, std::string author) : title(title), author(author)
    {
        rateCount = 2;
        rates = new float[rateCount];
        rates[0] = 3;
        rates[1] = 5;
    }

    // Destructor ... 
    ~Book()
    {
        delete[] rates;
        rates = nullptr;
    }

    // Copying the constructor of constructor ... 
    Book(Book &original)
    {
        this->title = original.title;
        this->author = original.author;
        this->rateCount = original.rateCount;

        rates = new float[rateCount];
        for (int i = 0; i < rateCount; i++)
        {
            rates[i] = original.rates[i];
        }
    }
};

int main()
{
    Book book1("Devil Book", "Sasi");
    Book book2("DevilDare Book", "Kumar");

    // Types to Invoke the Copy Constructor ... 
    // Type 1 
    Book book3(book1);
    // Type 2 
    Book book4 = book1 ; 

    std::cout << book4.rates[1] ; 
    return 0;
}