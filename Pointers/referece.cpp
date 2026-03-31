#include<iostream>
using namespace std ; 
int main()
{
    int age = 20 ; 

    int copyAge = age ;  // getting copy 
    int &aliasAge = age ; // assign a reference to the variable 

    age = 21 ; 

    cout << "Reference : " <<  aliasAge << endl; 
    cout << "Copy : " << copyAge << endl;

    // pointer -> used to store the address of variable ; 

    int* ptr = &age ; 

    *ptr = 22 ; // now age varible also getting updated 

    cout << "ptr : " << ptr << endl ;
    cout << "*ptr : " << *ptr << endl ;  

}