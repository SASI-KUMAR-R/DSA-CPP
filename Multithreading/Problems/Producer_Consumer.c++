#include <iostream>
#include <thread>
#include <queue>
#include <condition_variable>
#include <mutex>

std::condition_variable cv ;
std::mutex mtx ; 

const int bufferSize = 5 ; 
std::queue<int> buffer ; 

void producer()
{
    for(int i=0;i<10;i++)
    {
        std::unique_lock<std::mutex> lock(mtx) ; 

        cv.wait(lock,[]{
            return buffer.size() < bufferSize ; 
        });

        buffer.push(i) ; 

        std::cout << "Producer : " << i << std::endl ; 
        lock.unlock() ; 

        cv.notify_one() ; 
        std::this_thread::sleep_for(std::chrono::milliseconds(500)) ; 
    }
}

void consumer()
{
    for(int i=0;i<10;i++)
    {
        std::unique_lock<std::mutex> lock(mtx) ;

        cv.wait(lock,[]{
            return !buffer.empty() ; 
        });

        int val = buffer.front();
        buffer.pop() ; 

        std::cout <<"Consumer : " << val << std::endl ; 

        lock.unlock();

        cv.notify_one();

        std::this_thread::sleep_for(std::chrono::milliseconds(800)) ; 
    }
}


int main()
{
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join() ; 

    return 0 ; 
}