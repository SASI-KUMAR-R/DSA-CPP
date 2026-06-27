#include <iostream>
#include <thread>
#include <mutex>
std::mutex mtx ; 

int count = 0 ; 

void run()
{
    for(int i=0;i<1000000;i++)
    {
        if(mtx.try_lock())
        {
            mtx.lock();
            count ++ ; 
            mtx.unlock();
        }
    }
}

int main()
{
    std::thread t1(run);
    std::thread t2(run);

    t1.join();
    t2.join();

    std::cout << count ; 
    return 0;
}

