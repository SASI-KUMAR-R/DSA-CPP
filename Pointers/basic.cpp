#include <iostream>
using namespace std;

int main()
{
    // int n = 55;
    // cout << &n << endl; // Prints Address of "n"

    // int *ptr = &n;
    // cout << ptr << endl;  // Prints Address of "n"
    // cout << *ptr << endl; // "DeReference of the pointer" -- "* -> Dereference keyword"
    // cout << &ptr << endl; // Address of ptr


    // This will create a problem ... (Unassigned)
    
    /*
            int *ptr2 ; 
            *ptr2 = 5 ; 
            cout << ptr2 << endl ; 
    */

    // To over come ... 
    /*
                    1. point a valid varible 

                    int x ; 
                    int *ptr2 ; 
                    *ptr2 = 5 ; 
                    cout << *ptr2 << endl ; 
    */

    /*
                    2. point a valid varible 

                    int *ptr2 = new int ; 
                    *ptr2 = 5 ; 
                    cout << *ptr2 << endl ; 
    */
    return 0;
}