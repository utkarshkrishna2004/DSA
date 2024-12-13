// brute force

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};

    int n = arr.size();

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        
        bool leader = true;

        for (int j = i+1; j < n; j++) {
            if(arr[j] > arr[i]) {
                leader = false;
                break;
            }
        }

        if(leader == true) ans.emplace_back(arr[i]);       
    }
    
    // Printing
    cout << "leaders: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " | ";
    }
    cout << endl;
    
    return 0;
}