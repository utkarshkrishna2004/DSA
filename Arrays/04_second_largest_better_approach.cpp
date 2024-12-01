// Better Approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 1, 4};
    
    int largest = arr[0];

    for(int i = 0; i < arr.size(); i++ ) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "largest element: " << largest << endl; 

    int second_largest = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    cout << "second largest element: " << second_largest << endl; 

    return 0;
}

// T.C. = O( N + N ) = O( 2N )
