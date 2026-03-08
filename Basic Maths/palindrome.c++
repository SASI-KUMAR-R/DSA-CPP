#include <iostream>

int main()
{
    int x = 555 ; 
    int n = x ; 

    int rev = 0 ; 
    while(n>0)
    {
        int rem = n % 10 ; 
        rev = rev * 10 + rem ; 
        n /= 10 ; 
    }

    if(x == rev) 
    {
        std::cout<<"Palindrome"<<std::endl ; 
    }
    else
    {
        std::cout<<"Not Palindrome"<<std::endl ; 
    }
    return 0;
}