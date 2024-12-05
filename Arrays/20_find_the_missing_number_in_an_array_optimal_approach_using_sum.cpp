// Optimal approach --> 1. using sum || 2. using xor

// 1. using sum :-

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // ie, array can have elements from 1 to n
    vector<int> arr = {1, 3, 4, 5};

    // sum of n natural numbers
    int sum = ( n * ( n + 1 ) ) / 2;

    int missing;

    int sum_of_array = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        sum_of_array += arr[i];
    }

    missing = sum - sum_of_array;
    

    // Printing
    cout << "missing element: " << missing << endl;

    return 0;
}