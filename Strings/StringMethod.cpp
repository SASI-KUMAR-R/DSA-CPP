#include<iostream>
#include<string>
using namespace std ; 
int main()
{
    string A = "Sasi";
    string B = "Kumar";
    cout<<A+" "+B<<endl;
    cout<<A.append(B)<<endl;
    cout<<A[0]<<endl; // using sliceing opertor 
    cout<<A.at(0)<<endl; // using method to call it 

    B[0] = 'k';
    cout<<B<<endl;

    // Getting string as input without space -> cin consider space as new value 
    string str1 ;
    cout<<"Enter the name without space :";
    cin>>str1 ;
    cout<<"The Enter name is : "<<str1;

    // getting string as input with space -> "getline" will be used for it . 
    string str2 ;
    cout<<"Enter the Sentence with space :";
    getline(cin,str2);
    cout<<"The Entered string is :" << str2 << endl;
    return 0;
}