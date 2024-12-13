/*
    Optimal Approach
    Dutch National Flag Algorithm (DNF Algorithm)

    Problem:
    Given an array containing 0s, 1s, and 2s, sort the array in-place so that 
    all 0s come first, followed by 1s, and then 2s.

    Algorithm:
    1. Maintain three pointers:
       - `low`: Points to the boundary between 0s and the rest of the array.
       - `mid`: Points to the current element being processed.
       - `high`: Points to the boundary between 2s and the rest of the array.
    2. Process elements as follows:
       - If the element at `mid` is 0, swap it with the element at `low` and increment both `low` and `mid`.
       - If the element at `mid` is 1, move `mid` to the next element.
       - If the element at `mid` is 2, swap it with the element at `high` and decrement `high`.
    3. Repeat until `mid` crosses `high`.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    int n = arr.size();

    // Initialize pointers
    int low = 0;          // Boundary for 0s
    int mid = 0;          // Current element being processed
    int high = n - 1;     // Boundary for 2s

    // Sorting logic
    while (mid <= high) {
        if (arr[mid] == 0) {
            // If the current element is 0, swap with the boundary of 0s and move both pointers
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        
        else if (arr[mid] == 1) {
            // If the current element is 1, just move to the next element
            mid++;
        } 
        
        else { // arr[mid] == 2
            // If the current element is 2, swap it with the boundary of 2s and decrement high
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // Printing the sorted array
    cout << "Required output: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;

    return 0;
}

// T.C. = O(n)
// S.C. = O(1)
