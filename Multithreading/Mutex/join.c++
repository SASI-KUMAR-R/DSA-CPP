#include <iostream>
#include <thread>
#include <chrono>

void run(int count)
{
    while(count --> 0)
    {
        std::cout << "HI\n" ;
    }
    std::this_thread::sleep_for(std::chrono::seconds(5)) ; 
}

int main()
{
    std::thread t1(run,10) ;
    std::cout << "Main()\n" ; 
    t1.join();
    if(t1.joinable())
        t1.join();
    std::cout << "Main() - After \n" ; 
    return 0;
}