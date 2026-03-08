#include <iostream>

int main()
{
    int n = 45607892 ; 
    while(n>0)
    {
        int rem = n % 10 ; 
        std::cout << rem << std::endl ; 
        n /= 10 ; 
    }
    return 0;
}