#include <iostream>
using namespace std;

enum days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main()
{
    days today = MONDAY;
    days tomorrow = SUNDAY;

    if (tomorrow == days::SUNDAY) // :: -> scope resolution
        cout << "Holiday" << endl;

    cout << today << endl;
    cout << tomorrow << endl;
}