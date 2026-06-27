#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void run(char ch, int n)
{
    std::lock_guard<std::mutex> lock(mtx);

    for(int i = 0; i < n; i++)
    {
        std::cout << "Thread " << ch << " -- " << i << std::endl;
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