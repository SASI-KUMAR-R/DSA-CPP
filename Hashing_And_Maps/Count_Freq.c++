#include <iostream>

// Global can store the memory of 10^7 ----- but inside main only possible 10^6 
int hash_global[10000000]  ; 
int hash_insideMain[1000000] ; 


int main()
{
    int n;
    std ::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // precomutation
    int hash[13] = {0};
    for (auto i : arr)
    {
        hash[i]++;
    }

    int q;
    std :: cout << "How many iternation " ;
    std ::cin >> q;
    while (q-- > 0)
    {
        int number;
        std::cout << "Enter Number to find the hash ";
        std ::cin >> number;
        // std ::cout << std::endl;

        std::cout << hash[number] << std::endl;
    }
    return 0;
}