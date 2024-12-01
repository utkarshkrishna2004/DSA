// Optimised Approach (2 pointer approach)

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 4};

    int i = 0;

    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i++;
        } 
    }

    cout << "size of non-duplicate array : " << (i + 1) << endl;
    
    return 0;
}