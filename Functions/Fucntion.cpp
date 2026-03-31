#include<iostream>
#include<math.h>
using namespace std ; 

void after5(int,int);  // funtion declaration
bool checkprime(int);

int main()
{
    int age = 20 ; 
    after5(age,6);
    after5(50,10);

    if(checkprime(13))
    {
        cout << "Prime" << endl ; 
    }
    else
    {
        cout<< " Not Prime " << endl ; 
    }
}

void after5(int x,int y)
{
    cout << "Age After " << y << " Years " << x + y << endl; 
}

bool checkprime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(i%2 == 0) return false ; 
    }
    return true ; 
}


// FUCNTION have three important factor 
// 1 . Fucntion Declaration 
// 2 . Fucntion Defintion
// 3 . Function Call 

