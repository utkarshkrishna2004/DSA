// Optimal approach --> 1. using sum || 2. using xor

// 2. using xor :-

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // ie, array can have elements from 1 to n
    vector<int> arr = {1, 3, 4, 5};

    int missing;

    int xor1 = 0;
    int xor2 = 0;

    // Calculate XOR of all numbers from 1 to n.
    for(int i = 1; i <= n; i++) {
        xor1 = xor1 ^ i;
    }

    // Calculate XOR of all elements in the array.
    for (int i = 0; i < arr.size(); i++) {
        xor2 = xor2 ^ arr[i];
    }

    // XOR of xor1 and xor2 gives the missing number.
    missing = xor1 ^ xor2;
    
    

    // Printing
    cout << "missing element: " << missing << endl;

    return 0;
}