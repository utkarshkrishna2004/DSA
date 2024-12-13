// better approach

#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    // Step 1: Sort the array to bring consecutive numbers together
    sort(arr.begin(), arr.end());

    // Variables to track the longest sequence and the current sequence count
    int longest = 1;
    int cnt_current = 0;

    // Variable to track the last number in the sequence
    int last_smaller = INT_MIN;


    // Step 2: Iterate through the sorted array to find the longest sequence
    for (int i = 0; i < arr.size(); i++) {
        
        // If the current number is exactly 1 greater than the last number in the sequence
        if(arr[i] - 1 == last_smaller) {
            cnt_current += 1; // Increment the current sequence length
            last_smaller = arr[i]; // Update the last number in the sequence
        }


        // If the current number is not equal to the last number (to handle duplicates)
        else if (arr[i] != last_smaller) {
            cnt_current = 1; // Reset the current sequence length
            last_smaller = arr[i]; // Update the last number in the sequence
        }


        longest = max(longest, cnt_current);
    }
    
    cout << "longest: " << longest << endl;

    return 0;
}

/*
Time Complexity (T.C.):
Sorting the array takes O(n log n).
The single pass through the array takes O(n).
Therefore, the total time complexity is O(n log n).

Space Complexity (S.C.):
Sorting requires O(1) additional space if in-place sorting is used (e.g., std::sort).
Hence, the total space complexity is O(1).
*/