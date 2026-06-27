#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx ; 
void run()
{
    if(mtx.try_lock())
    {
        std::cout << "Locked" <<std::endl;
        mtx.unlock(); 
    }
    else
    {
        std::cout << "Not locked else " <<std::endl;
    }
}

int main()
{
    std::thread t1(run);
    std::thread t2(run);
    std::thread t3(run);

    t1.join();t2.join();t3.join();
    return 0;
}