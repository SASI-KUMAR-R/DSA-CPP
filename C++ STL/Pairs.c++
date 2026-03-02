#include <iostream>
#include <utility> // Main Library for Pairs

// Function Declartion
void ExplainPairs() ; 

// Main Function
int main()
{
    ExplainPairs() ; 
    return 0;
}

// Function Defintion
void ExplainPairs() 
{
    // Single Pair
    std::pair<int,int> p = {1,2} ; 
    std::cout << p.first << " - " << p.second << std::endl ; 

    // key - Pair
    std::pair<int, std::pair<int,int>> p1 = {1,{2,3}};
    std::cout << p1.first << " " << p1.second.first << " " << p1.second.second << std::endl;

    // Key Array
    std::pair<int,int> arr[] = {{1,2},{3,4},{5,6}} ; 
    std::cout << arr[0].first << " " << arr[0].second ; 

}