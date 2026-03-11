#include <iostream>
void callback(int i, int n);

int main()
{
    int n = 0;
    callback(5, n);
    return 0;
}

void callback(int i, int n)
{
    if (i < 1 )
        return;
    callback(i - 1, n);
    std::cout << i << std::endl;
}