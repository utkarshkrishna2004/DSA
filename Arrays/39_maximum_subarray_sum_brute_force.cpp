// brute force

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    // Initialize maxSum to the smallest possible integer to handle negative arrays
    int maxSum = INT_MIN; 

    // Iterate over all starting points of subarrays
    for (int i = 0; i < arr.size(); i++) {

        // Iterate over all ending points of subarrays
        for (int j = i; j < arr.size(); j++) {

            int sum = 0; // Reset sum for the current subarray

            // Calculate the sum of the subarray from i to j
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            // Update maxSum if the current subarray sum is greater
            maxSum = max(maxSum, sum);
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}

// T.C. = O(n^3)
// S.C. = O(1)