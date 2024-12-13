// optimal approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3,1,-2,-5,2,-4}; // --> {3,-2,1,-5,2,-4}

    int n = arr.size();

    vector<int> ans(n, 0);

    int ptr_pos = 0;
    int ptr_neg = 1;

    for (int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            ans[ptr_pos] = arr[i];
            ptr_pos += 2;
        } 

        else {
            ans[ptr_neg] = arr[i];
            ptr_neg += 2;
        }
    }
    

    // Printing
    cout << "rearranged array: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " | ";
    }
    cout << endl;
    

    return 0;
}

// T.C. = O(n)
// S.C. = O(n) 
