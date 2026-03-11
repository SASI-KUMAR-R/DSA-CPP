#include <iostream>
void callback(int i, int n);

int main()
{
    int n = 5;
    callback(1, n);
    return 0;
}

void callback(int i, int n)
{
    if (i > n)
        return;
    std::cout << "SASIKUMAR " << i << std::endl;
    callback(i + 1, n);
}