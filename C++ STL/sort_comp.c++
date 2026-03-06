#include <iostream>
#include <algorithm> // Include for std::sort
#include <utility>

bool comp(std::pair<int,int> p1, std::pair<int,int> p2)
{
    return p1.first > p2.first; 
}

int main()
{
    std::pair<int,int> p[] = {{1,11},{3,33},{4,44}}; 
    int n = sizeof(p)/sizeof(p[0]);

    std::sort(p, p+n, comp);

    for(int i=0; i<n; ++i)
        std::cout << p[i].first << " " << p[i].second << std::endl;
}