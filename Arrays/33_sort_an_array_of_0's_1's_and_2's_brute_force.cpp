// brute force, use any sorting algorithm

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    sort(arr.begin(), arr.end());


    // Printing
    cout << "required output: ";

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    

    return 0;
}

// T.C. = O(n logn)
// S.C. = O(n)
