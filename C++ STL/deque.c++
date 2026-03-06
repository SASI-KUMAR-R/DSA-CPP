#include <iostream>
#include <deque>

int main()
{
    std::deque<int> dq ; 

    dq.push_back(10);     // {10}
    dq.push_back(30);     // {10,30}

    dq.push_front(20);    // {20,10,30}
    dq.push_front(40);    // {40,20,10,30}

    dq.pop_back();        // {40,20,10}

    dq.pop_front();        // {20,10}


    dq.front() ;           // 20

    dq.back() ;           // 10
}