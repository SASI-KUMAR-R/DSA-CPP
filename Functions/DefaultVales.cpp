#include<iostream>
#include<string>
using namespace std ; 

void printNumber(int num=2) // Default Arguments 
{
    cout << num << endl ; 
}

int main()
{
    printNumber(5);
    printNumber(); // we can call without that values also ... 
}

