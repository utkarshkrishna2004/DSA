// Optimal Approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 1, 4};
    
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {

            // first, need to assign the current value of largest to second_largest
            second_largest = largest;

            // then, update the value of largest
            largest = arr[i];
        }

        else if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    
    cout << "second largest element: " << second_largest << endl; 

    return 0;
}

// T.C. = O( N )
