// better approach
// use of hashing

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n = arr.size();
    int majorityElement;

    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[ arr[i] ] += 1;
    }

    for(auto it: mpp) {
        if (it.second > n/2) {
            majorityElement = it.first;
        }
        
    }

    cout << "majority element: " << majorityElement << endl;

    return 0;
}

// T.C. = O(n logn)
// S.C. = O(n)