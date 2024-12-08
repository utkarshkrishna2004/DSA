// optimal approach
// use of 2 pointer approach and greedy approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 3;

    // Initialize two pointers for the sliding window
    int left = 0, right = 0;

    // Initialize the running sum for the current window
    long long sum = arr[0];

    // Variable to store the maximum length of subarray with sum k
    int maxLen = 0;

    // Size of the array
    int n = arr.size();

    // Iterate until the right pointer reaches the end of the array
    while (right < n) {

        // Shrink the window from the left as long as the sum exceeds k
        while (left <= right && sum > k) {
            sum -= arr[left]; // Subtract the leftmost element from the sum
            left++;           // Move the left pointer to the right
        }

        // Check if the current window's sum is equal to k
        if (sum == k) {
            // Update the maximum length of the subarray
            maxLen = max(maxLen, right - left + 1);
        }

        // Expand the window by moving the right pointer
        right++;

        // Add the new element to the sum (if right hasn't exceeded bounds)
        if (right < n) {
            sum += arr[right];
        }
    }

    cout << "length: " << maxLen << endl;

    return 0;
}


// T.C. = O( n )
// S.C. = O( 1 )

// For problems where array consists of negative numbers, this won't work the previous approach that we used with hashing would work