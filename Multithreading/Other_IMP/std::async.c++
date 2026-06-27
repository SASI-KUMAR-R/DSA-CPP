#include <iostream>
#include <chrono>
#include <thread>
#include <future>
typedef long int li ; 

li run(li n)
{
    int result = 0 ; 
    for(li i=0;i<n;i++) result += i ; 
    return result ; 
}

int main()
{

    li n = 100000 ; 

    std::cout << "Waiting da 1 \n" ; 

    std::future<li> result = std::async(std::launch::deferred,run,n);

    std::cout << "Waiting da 2 \n" ; 
    std::cout << "Result = " << result.get() << std::endl; 
}