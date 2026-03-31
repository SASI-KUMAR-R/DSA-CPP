#include <iostream>
using namespace std;
int main()
{
    int val = 24; // compile time allocation

    int *ptr;
    ptr = new int; // Run Time Allocation (Dynamic Allocation)
    *ptr = 24;
    cout << ptr << endl;
    cout << &val << endl;

    // where this dynamic allocation are working -> Example ->> ARRAYS ;

    int num ; 
    cout << "Enter the size of array " ; 
    cin >> num ; 

    int* arr = new int[num] ; // DYNAMIC WAY

    cout << "Enter " << num <<" Numbers : ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << &arr[i] << endl;
    }
    
}