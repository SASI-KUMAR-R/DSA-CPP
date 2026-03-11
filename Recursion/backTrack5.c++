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
    callback(n+1) ; 
    std::cout<< n << std::endl ; 
}