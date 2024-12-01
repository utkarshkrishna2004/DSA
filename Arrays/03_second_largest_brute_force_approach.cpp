// Brute Force (using C++ STL)

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 1, 4};
    sort(arr.begin(), arr.end());

    int largest = arr[arr.size() - 1];

    int second_largest;

    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            second_largest = arr[i];
            break;
        }
    }
    

    cout << "Second Largest: " << second_largest << endl;

    return 0;
}

// T.C. = O( (N logN) + N)
