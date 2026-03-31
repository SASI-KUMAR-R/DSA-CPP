#include<iostream>
using namespace std ; 

void sum(int a,int b)
{
    cout << a + b << endl ; 
}

void sum(int a,int b,int c)
{
    cout << a + b + c << endl ; 
}

void sum(int a,int b,int c,int d)
{
    cout << a + b + c + d << endl ; 
}

void sum(int a,float b)
{
    cout << "T " << a + b << endl; 
}

int main()
{
    sum(5,(float)5.0);
    sum(5,5,5);
    sum(5,5,5,5);
}

// FUNCTION OVERLOADING -> same funcion name but differenct paramater 