#include <iostream>
#include <chrono>
#include <thread>
using ull = unsigned long long;
ull oddval = 0 ;
ull evenval = 0 ; 

ull oddSum(ull n)
{
    for (ull i = 1; i < n; i += 2)
        oddval += i;
    return oddval;
}

ull evenSum(ull n)
{
    for (ull i = 0; i < n; i += 2)
        evenval += i;
    return evenval;
}

int main()
{
    auto startTime = std::chrono::high_resolution_clock::now() ;
    ull n = 9999999999 ;  
    std::thread t1(oddSum,n) ; 
    std::thread t2(evenSum,n) ; 

    t1.join();
    t2.join();

    // ull odd = oddSum(n);
    // ull even = evenSum(n);

    auto endTime = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);

    std::cout << oddval << '\n';
    std::cout << evenval << '\n';
    std::cout << duration.count() << " s\n";
}