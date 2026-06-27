#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex mt1 ; 

long long balance = 0 ; 

void thread1(long long n)
{
    std::lock_guard<std::mutex> lock(mt1) ; 
    // mt1.lock();
    balance += n ; 
    // mt1.unlock();
}

int main()
{
    std::thread t1(thread1,600);
    std::thread t2(thread1,500);

    
    t1.join();
    t2.join();

    std::cout << balance ;
}