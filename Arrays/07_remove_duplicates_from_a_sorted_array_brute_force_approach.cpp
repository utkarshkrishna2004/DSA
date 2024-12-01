// Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};

    set<int> st;

    for (int i = 0; i < arr.size(); i++) {
        st.insert(arr[i]); // O(log N) : to insert in set
    }
    // O(N log(N))

    int index = 0;

    for (auto it: st) {
        arr[index] = it;
        index++;
    }
    // O(N)

    // Total Time Complexity = O (N log(N) + N)

    for (int i = 0; i < st.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    
    return 0;
}