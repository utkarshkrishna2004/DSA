// Using the approach of mapping

// For a given array, | 1 | 2 | 3 | 1 | 3 | 2 | 12 |, if we use array hashing, we have to take a hash array of size 13

// Using an array-based hash of size 13 requires extra space, with slots for unused elements, which is wasteful for sparse data.

// Using a map with | 1 | 2 | 3 | 1 | 3 | 2 | 12 | results in a compact data structure storing only {1: 2, 2: 2, 3: 2, 12: 1}, which is efficient.


#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[size];
    cout << "enter the elements of the array: " << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Precompute: Count the frequency of each element in the array
    map <int, int> mpp;
    for (int i = 0; i < size; i++) {
        mpp[arr[i]]++; // Increment count of arr[i] in the map
    }
    

    int queries;
    cout << "enter the number of queries: " << endl;
    cin >> queries;

    // Processing each query
    while (queries--) {
        int num;
        cout << "enter the number to search: " << endl;
        cin >> num;

        // Fetching
        cout << num << " occours: " << mpp[num] << " times" << endl;
    }

    return 0;
}