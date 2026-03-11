#include <iostream>
void sum(int i, int total);

// Sum of the N numbers .

int main()
{
    int n = 5;
    sum(n, 0);
    return 0;
}

void sum(int i, int total)
{
    if (i < 1)
    {
        std::cout << total;
        return;
    }
    std::cout << i << " " << total << std ::endl;
    sum(i - 1, total + i);
}