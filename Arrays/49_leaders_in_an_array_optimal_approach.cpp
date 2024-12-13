// optimal approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};

    int n = arr.size();

    vector<int> ans;

    int maxi = INT_MIN;

    for (int i = n-1; i >= 0; i--) {
        if (arr[i] > maxi) {
            ans.emplace_back(arr[i]);

            maxi = max(arr[i], maxi);
        }
        
    }
    
    // Printing
    cout << "leaders: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " | ";
    }
    cout << endl;
    
    return 0;
}