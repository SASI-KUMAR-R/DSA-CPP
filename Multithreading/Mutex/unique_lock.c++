#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void run(char ch, int n)
{
    std::unique_lock<std::mutex> lock(mtx);

    std::cout << "Starting thread " << ch << '\n';

    lock.unlock();  // release mutex

    for(int i=0;i<n;i++)
    {
        std::cout << ch <<"--"<< i << '\n'; // not protected
    }
}

int main()
{
    std::thread t1(run, 'A', 10);
    std::thread t2(run, 'B', 10);

    t1.join();
    t2.join();

    return 0;
}