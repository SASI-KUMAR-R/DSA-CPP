#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex mt1 ; 
std::mutex mt2 ; 

void thread1()
{
    mt1.lock(); // t1 locked
    std::this_thread::sleep_for(std::chrono::seconds(1)); // waiting but deadlock
    mt2.lock();
    std::cout << "T1\n" ; 
    mt1.unlock();
    mt2.unlock();
}

void thread2()
{
    mt2.lock(); // t2 locked
    std::this_thread::sleep_for(std::chrono::seconds(1)); // waiting but deadlock
    mt1.lock();
    std::cout << "T2" ; 
    mt2.unlock();
    mt1.unlock();
}

int main()
{
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();
}