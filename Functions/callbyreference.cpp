#include <iostream>
using namespace std;

void add(int *p, int *q)  // where the address will have here ... 
{
    int result = *p + *q ; 
    *p = 40 ; // we can assign it value 
    cout << result << endl ; 
}

int main()
{
    int x = 10, y = 20;
    cout << "Before " << x << " " << y << endl ; 
    add(&x, &y); // call by reference ...
    cout << "After " << x << " " << y << endl ; 
}
