#include <iostream>
using namespace std;

int main()
{
    int a = 45, b = 0;

    try
    {
        if (b == 0)
            throw 0;
        int c = a / b;
    }
    catch (int e)
    {
        cout << "Erroe" << endl;
    }
}