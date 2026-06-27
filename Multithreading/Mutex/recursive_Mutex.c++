#include <iostream>
#include <mutex>
#include <thread>

std::recursive_mutex rmtx ; 
int counter = 0 ; 

void run(char ch,int loopCount)
{
    if(loopCount < 0) return ; 
    rmtx.lock();
    std::cout<<"Thread " << ch << " " << counter++ << std::endl ; 
    run(ch,loopCount-1);
    rmtx.unlock() ;
}

int main()
{
    std::thread t1(run,'A',10);
    std::thread t2(run,'B',10);
    t1.join();
    t2.join() ; 
    return 0;
}