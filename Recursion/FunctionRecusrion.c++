#include <iostream>
int sum(int i);

// Sum of the N numbers .

int main()
{
    int n = 5;
    int total = sum(n);
    std::cout << total;
    return 0;
}

int sum(int i)
{
    if (i < 1)
        return 0;
    return i + sum(i - 1);
}