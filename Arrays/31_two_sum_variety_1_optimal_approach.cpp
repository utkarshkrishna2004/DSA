#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    bool result = false;
    int n = arr.size();

    int left = 0; 
    int right = n - 1;

    sort(arr.begin(), arr.end());

    while (left < right) { 
        if (arr[left] + arr[right] < target) {
            left++;
        } 
        
        else if (arr[left] + arr[right] > target) {
            right--;
        } 
        
        else { // When the sum equals the target
            result = true;
            break;
        }
    }
    
    cout << "result: " << result << endl;

    return 0;
}

// Time Complexity = O(n log n) due to sort
// Space Complexity = O(1)
