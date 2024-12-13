// brute force

#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>& arr, int num) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    int longest = 1;

    for (int i = 0; i < arr.size(); i++) {
        
        int cnt = 1;
        int x = arr[i];

        while(linearSearch(arr, x+1) == true) {
            x = x + 1;
            cnt = cnt + 1;
            longest = max(cnt, longest);
        }
    }
    
    cout << "longest: " << longest << endl;

    return 0;
}

// T.C. = O(n^2)
// S.C. = O(1)