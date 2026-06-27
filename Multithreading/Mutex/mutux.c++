#include <iostream>
#include <mutex>
#include <thread>

int count = 0;
std::mutex mtx; // 1. Create a global instance of the mutex

void run()
{
    mtx.lock();   // 2. Call lock() on the instance
    count++; 
    mtx.unlock(); // 3. Call unlock() on the instance
    count++;
}

int main()
{
    std::thread t1(run); 
    std::thread t2(run); 
    
    // 4. Wait for threads to finish executing
    t1.join();
    t2.join();
    
    std::cout << "Final count: " << count << std::endl;
    return 0;
}