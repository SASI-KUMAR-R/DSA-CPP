#include <iostream>

int main()
{
    int n = 45607892 ; 
    int rev = 0 ; 
    while(n>0)
    {
        int rem = n % 10 ; 
        rev = rev * 10 + rem ; 
        n /= 10 ; 
    }
    std :: cout << rev ; 
    return 0;
}