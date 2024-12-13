#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSum = INT_MIN; // Maximum subarray sum
    int sum = 0;          // Running sum of the current subarray

    // Variables to track subarray boundaries
    int start = 0;        // Start of the current subarray
    int ans_start = 0;    // Start index of the maximum subarray
    int ans_end = 0;      // End index of the maximum subarray

    // Traverse the array to calculate the maximum subarray sum
    for (int i = 0; i < arr.size(); i++) {
        if (sum == 0) {    // Reset starting index of the current subarray
            start = i;
        }

        sum += arr[i];     // Add the current element to the running sum

        if (sum > maxSum) { // Update maxSum and subarray boundaries if a new max is found
            maxSum = sum;
            ans_start = start;
            ans_end = i;
        }

        if (sum < 0) {     // Reset the running sum if it becomes negative
            sum = 0;
        }
    }

    // Output the results
    cout << "Maximum subarray sum: " << maxSum << endl;
    cout << "Subarray: ";
    for (int i = ans_start; i <= ans_end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
