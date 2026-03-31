#include<iostream>
#include<iomanip> // input output  manipulator for setpricsion 
#include<string>
using namespace std ;
int main()
{
    int age ; 
    float salary = 14000.34;
    double salary2 = 14.9231555123123 ; 
    char ch = '2';
    string name = "SASIKUMAR";
    // cin >> ch ; 
    // cout<<"\nEnter the Ages : ";
    // cin>>age ;
    cout<<"Your Age : "<<age<<endl<<salary<<endl;
    cout<<fixed<<setprecision(2)<<salary2<<endl;
    cout<<ch<<endl ;
    cout<<name<<endl;
} 