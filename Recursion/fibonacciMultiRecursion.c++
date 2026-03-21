#include <iostream>
int fibo(int n);

int main()
{
    int n = 6;
    std::cout << fibo(n);

    return 0;
}

int fibo(int n)
{
    if (n <= 1)
        return n;
    int last = fibo(n - 1);
    int slast = fibo(n - 2);
    return last + slast;
}