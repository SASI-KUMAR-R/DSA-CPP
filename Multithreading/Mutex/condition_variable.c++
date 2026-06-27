#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>

std::mutex mtx ; 
std::condition_variable cv ; 
bool ready = false ;

void producer()
{
    std::this_thread::sleep_for(std::chrono::seconds(3)) ;
    // Creating a SCOPE 😓
    {
        std::lock_guard<std::mutex> lock(mtx) ; 
        ready = true ; 
    }
    cv.notify_one() ; 
}

void consumer()
{
    std::unique_lock<std::mutex> lock(mtx) ; 
    cv.wait(lock,[]{return ready ; });
    std::cout << " Consumer Taken " << std::endl ; 
}

int main()
{
    std::thread t1(producer);
    std::thread t2(consumer);
    t1.join();
    t2.join();
    return 0;
}