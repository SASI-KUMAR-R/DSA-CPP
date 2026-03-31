#include <iostream>
#include <map>

int main()
{
    std::unordered_map<int,int> freq ; 
    // std::map<int,int> freq ; 
    int arr[] = {1,2,3,3,2,1,5,5,4} ; 
    int n = sizeof(arr) / sizeof(arr[0]) ; 
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++ ; 
    }

    for(auto i : freq)
    {
        std::cout << i.first << " - " << i.second << "\n" ; 
    }
    return 0;
}

// 1. map (Ordered Map)
// - Underlying structure: Red-Black Tree (balanced BST)
// - Time complexities(always):
//           - Insertion: O(log n)
//           - Access/Search: O(log n)
//           - Deletion: O(log n)
// - Ordering: Maintains keys in sorted order
// - Use case: When you need ordered traversal or range queries

// 2. unordered_map (Hash Map)
// - Underlying structure: Hash Table
// - Time complexities:
//     - Average/best case:
//             - Insertion: O(1)
//             - Access/Search: O(1)
//             - Deletion: O(1)
//     - Worst case (due to hash collisions): O(n)
// - Ordering: No guaranteed order of keys
// - Use case: When fast access is critical and order doesn't matter