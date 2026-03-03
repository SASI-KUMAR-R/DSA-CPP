#include <iostream>
#include <vector>

int main()
{
    // 1. Like Array
    std::vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);
    v.emplace_back(50);

    // 2. Array With PAIRS
    std::vector<std::pair<int, int>> vec;
    vec.push_back({1, 2});  // Need to put {}
    vec.emplace_back(3, 4); // Automatically Assume

    // 3. Assinging Size to the vec
    std ::vector<int> v1(5); // [0,0,0,0,0] -> Loading With Garbage Value...

    // 4. Assign Size with Value (intial Value)
    std::vector<int> v2(5, 200); // [200,200,200,200,200]

    // 5. Copying the vector to vector
    std::vector<int> x(5, 10);
    std::vector<int> y(x);

// -------------------------------------------------------------------------------------------- // 

    // 6. pointing the array at front
    std::vector<int>::iterator it = v.begin();
    std::cout << *(it) << std::endl;
    it += 1; // + add -> going forward
    std::cout << *(it) << std::endl;

    // 7. pointing the array at back
    std::vector<int>::iterator it1 = v.end();
    std::cout << *(it1) << std::endl;
    it -= 1; // - minus -> coming from back
    std::cout << *(it1) << std::endl;

    // 8. For Loop && AUTO 
    for (auto i = v.begin(); i != v.end(); i++)
        std::cout << *(i) << " " << std::endl;

// -------------------------------------------------------------------------------------------- // 

    // 9. Erase
    v.erase(v.begin() + 1); // Only One single element will be deleted 

    // 10. Erase from start to end 
    v.erase(v.begin()+1,v.end()-1) ; 

// -------------------------------------------------------------------------------------------- // 
   
   // 11. Inserting a Element
   v.insert(v.begin(),11) ; // inserting a 0-indexc


    
    
    // IMPORTANT : 
    // 1. if we using "Iterator" Means -> Use "POINTER"
}