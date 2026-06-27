#include <iostream>
#include <thread>
#include <mutex>
std::mutex mtx ; 
static int count = 0 ; 

void func(int n,int k )
{
    mtx.lock() ; 
    for(int i=0;i<n;i++)
    {
        count ++ ; 
    }
    mtx.unlock() ; 
    std::cout << count << std::endl ; 
}

int main()
{
    int n = 9999 ;
    std::thread t1(func,n,1) ;
    std::thread t2(func,n,2) ;
    t1.join() ; 
    t2.join() ;
    return 0 ; 
}