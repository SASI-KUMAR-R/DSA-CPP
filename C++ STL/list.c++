#include <iostream>
#include <list>

int main()
{
    std::list<int> l;
    l.push_back(10);
    l.push_back(11);
    l.push_back(12);
    
    l.push_front(13);
    l.push_front(14);
    l.push_front(15);

    l.emplace_front(1);
    l.emplace_front(2);
    l.emplace_front(3);


    l.emplace_back(4);
    l.emplace_back(5);
    l.emplace_back(6);


    for (auto i : l)
        std::cout << i << std::endl;
}