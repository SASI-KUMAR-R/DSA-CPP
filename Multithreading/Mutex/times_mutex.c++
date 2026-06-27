#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

// std::mutex mtx ; 
std::timed_mutex tmx ; 

int count = 0 ; 

void run(int i)
{
    if(tmx.try_lock_for(std::chrono::seconds(3)))
    {
        count ++ ; 
        std::cout << i << " done \n" ;
        // std::this_thread::sleep_for(std::chrono::seconds(3)) ; 
        tmx.unlock();
    }
    else
    {
        std::cout << "System cant go \n" ; 
    }
}

int main()
{
    std::thread t1(run,1);
    std::thread t2(run,2);
    std::thread t3(run,3);
    t1.join();
    t2.join();
    t3.join();
    
    // t1.detach();
    // t2.detach();
    // t3.detach();
    return 0;
}