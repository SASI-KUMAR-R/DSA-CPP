#include <iostream>
#include <thread>

// function 

void func(int n)
{
    std::cout << n << std::endl ;
}

int main()
{
    int n = 9999 ;
    std::thread t1(func,n) ;
    t1.join() ; 
    return 0 ; 
}