// majority element
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// brute force

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n = arr.size();
    int ans;

    for (int i = 0; i < n; i++) {
        int current_element = arr[i];
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if(arr[j] == current_element) {
                cnt++;
            }
        }

        if (cnt > n/2) {
            ans = current_element;
        }
        
    }
    

    cout << "majority element: " << ans << endl;

    return 0;
}

// T.C. = O(n^2)
// S.C. = O(1)