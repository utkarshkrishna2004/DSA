#include<bits/stdc++.h>
using namespace std;

int main() {
    // Array containing integers, with some elements appearing twice and one appearing once
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};

    // Variable to store the XOR result
    int xorr = 0;

    // Loop through each element of the array
    for (int i = 0; i < arr.size(); i++) {
        // XOR each element with the current value of xorr
        xorr = xorr ^ arr[i];
    }

    // The result after XORing all elements will be the element that appears once
    // because pairs of identical elements will cancel each other out (XORing same numbers results in 0)
    cout << "element appearing once: " << xorr << endl;
    
    return 0;
}
