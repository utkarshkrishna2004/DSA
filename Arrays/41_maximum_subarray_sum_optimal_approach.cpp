// Optimal Approach
// Kadane's Algorithm

// This algorithm finds the maximum sum of a contiguous subarray in O(n) time and O(1) space.

/*
Steps of Kadane's Algorithm:
    1. Traverse the array while maintaining a running sum (`sum`) for the current subarray.
    
    2. Update the `maxSum` whenever `sum` exceeds it.
    
    3. If `sum` becomes negative, reset it to 0 (start a new subarray from the next element).
    
    4. At the end of traversal, `maxSum` will hold the maximum subarray sum.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSum = INT_MIN; // Stores the maximum subarray sum (initially set to smallest integer)
    
    int sum = 0;     

    // Traverse the array to calculate the maximum subarray sum
    for (int i = 0; i < arr.size(); i++) {

        sum += arr[i];               // Add the current element to the running sum

        maxSum = max(maxSum, sum);   // Update maxSum if the running sum exceeds maxSum
        
        if (sum < 0) {               // If the running sum becomes negative, reset it to 0 (start a new subarray)
            sum = 0;                  
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}

// Time Complexity: O(n) - We traverse the array once.
// Space Complexity: O(1) - No extra space is used.
