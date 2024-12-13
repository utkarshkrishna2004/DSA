/* Brute Force Approach:

1. Generate all possible permutations of the array in sorted order.
2. Perform a linear search to locate the current permutation (e.g., [3, 1, 2]).
3. Once the current permutation is found, return the next permutation.
4. If the current permutation is the last one, return the first permutation.


Time Complexity Analysis:

- For an array of size `n`, there are `n!` possible permutations.
- Generating all permutations takes `O(n * n!)` time since each permutation is of size `n`.
- This approach is computationally expensive and impractical for larger `n`, so it is avoided.

Optimized Approach:
- Use C++ STL's `next_permutation` function, which rearranges elements in lexicographically next order.
- This is far more efficient with a time complexity of `O(n)` per call.
*/


// better approach, using C++ STL

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 2};

    // Using C++ STL's next_permutation to find the lexicographically next permutation
    next_permutation(arr.begin(), arr.end()); //c++ stl
    
    // Printing
    cout << "next permutation: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;
    

    return 0;
}