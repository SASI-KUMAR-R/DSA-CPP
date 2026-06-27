#include <iostream>
#include <thread>

// lambda way 

int main()
{
    // auto lam = [](int n){
    //     std::cout << n << std::endl ; 
    // };

    std::thread t1([](int n){
        std::cout << n << std::endl ; 
    },8);

    t1.join() ; 
}