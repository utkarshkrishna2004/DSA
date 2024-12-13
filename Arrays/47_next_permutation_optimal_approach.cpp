// optimal approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 2};

    int n = arr.size();
    
    int ind = -1; // Index to find the "breaking point"

    
    // Step 1: Find the first element from the end that is smaller than its next element
    // This is the "breaking point" where the next permutation can be generated.
    
    for (int i = n-2; i >= 0 ; i--) {
        if (arr[i] < arr[i+1]) {
            ind = i; // Set breaking point index
            break;
        }
    }

    // Step 2: If no breaking point is found (i.e., ind == -1), 
    // it means the array is the largest permutation. Reverse it to get the smallest permutation.
    if (ind == -1) {
        reverse(arr.begin(), arr.end());
    }


    // Step 3: Find the smallest element in the right part of the array which is greater than arr[ind]
    for (int i = n-1; i > ind; i--) {
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }
    

    // Step 4: Reverse the part of the array after the breaking point (ind+1)
    // This ensures the next permutation is in lexicographical order
    reverse((arr.begin() + ind + 1), arr.end());


    // Printing
    cout << "next permutation: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;

    return 0;
}