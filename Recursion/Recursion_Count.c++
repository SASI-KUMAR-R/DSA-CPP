#include <iostream>
void callback(int n);

int main()
{
    int n = 0 ; 
    callback(n) ; 
    return 0;
}

void callback(int n )
{
    if(n == 10) return ; 
    std::cout<< n << std::endl ; 
    callback(n+1) ; 
}