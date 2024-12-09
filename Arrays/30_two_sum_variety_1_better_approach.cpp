// variety 1: better approach
// use of hashing

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    int n = arr.size();
    bool result = false;

    map<int, int> mpp;

    for (int i = 0; i < n; i++) {

        int moreNeeded = target - arr[i];

        if(mpp.find(moreNeeded) != mpp.end()) {
            result = true;
        }

        mpp[arr[i]] = i;
    }
    
    
    cout << "result: " << result << endl;

    return 0;
}

// T.C. = O(n logn)
// S.C. = O(n)

// How mpp.find() Works
// mpp.find(key) works as follows:

// If the key is found, it returns an iterator pointing to the key-value pair in the map.
// If the key is not found, it returns mpp.end() (end iterator).