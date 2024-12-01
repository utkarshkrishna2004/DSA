// Brute Force :- Sort the array and return the value on the last index

// Optimised approach
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {3, 2, 1, 75, 2};
    
    int largest = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "largest entry: " << largest << endl;
    

    return 0;
}
