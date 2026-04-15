#include <iostream>
using namespace std;

// Function - Integer ... 
void printNumber(int* num)
{
    cout << *num << endl ; 
}

// Same Function - for character ... 
void printNumber(char* cha)
{
    cout << *cha << endl ; 
}

int main()
{
    int n = 5 ; 
    char ch = 's' ; 
    printNumber(&n);
    printNumber(&ch);
    return 0;
}