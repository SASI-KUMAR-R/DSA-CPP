#include <iostream>
#include <map>

int main()
{
    std::map<int, int> map;
    map[1] = 11;
    map[2] = 22;

    for (auto i : map)
        std ::cout << i.first << " - " << i.second << std ::endl;
}

// Note : same as PAIRS