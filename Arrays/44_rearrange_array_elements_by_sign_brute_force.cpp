// brute force

/*
You should return the array of nums such that the the array follows the given conditions:

- Every consecutive pair of integers have opposite signs.
- For all integers with the same sign, the order in which they were present in nums is preserved.
- The rearranged array begins with a positive integer.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3,1,-2,-5,2,-4}; // --> {3,-2,1,-5,2,-4}

    int n = arr.size();

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos.emplace_back(arr[i]);
        } 
        
        else {
            neg.emplace_back(arr[i]);
        }
    }

    int ptr_pos = 0;
    int ptr_neg = 0;

    // we know that both these arrays would be of the size n/2 and n would always be even

    for (int i = 0; i < n; i += 2) {
        arr[i] = pos[ptr_pos];
        ptr_pos++;
    }
    
    for (int i = 1; i < n; i += 2) {
        arr[i] = neg[ptr_neg];
        ptr_neg++;
    }
    

    // Printing
    cout << "rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;
    

    return 0;
}

// T.C. = O(n) + O(n/2) + O(n/2) = O(2n)
// S.C. = O(n/2) + O(n/2) = O(n) 
