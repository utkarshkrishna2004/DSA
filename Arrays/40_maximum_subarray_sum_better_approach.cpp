// better approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSum = INT_MIN; 

    for (int i = 0; i < arr.size(); i++) {
        
        int sum = 0;
        
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }    

    }

    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}

// T.C. = O(n^2)
// S.C. = O(1)