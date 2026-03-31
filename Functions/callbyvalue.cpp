// main aim is calling a function with values 

#include<iostream>
using namespace std ;
void add(int,int);

int main()
{
    int x = 10 , y = 20 ; 
    cout << "Before " << x << " " << y << endl ; 
    add(x, y); // call by values ... 
    cout << "After " << x << " " << y << endl ; 
}

void add(int x,int y)
{
    x = 101 ; //
    cout << x + y << endl ;
}