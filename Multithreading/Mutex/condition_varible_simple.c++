#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void worker()
{
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Worker Waiting\n";
    cv.wait(lock, []
            { return ready; });
    std::cout << "Worker Started\n";
}

int main()
{
    std::thread t1(worker);
    std::this_thread::sleep_for(std::chrono::seconds(5)) ; 
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true ; 
    }

    cv.notify_one();
    t1.join() ; 
}