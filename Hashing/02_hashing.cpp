// Hashing - Pre-storing and fetching

// Let we have an array and it can have numbers as entries which is at max 12(ie, the array can have 1, 2, ..., 12)

// Hashing says since it can have entries from 0-12

// It creates another "hash array" of size 12+1, ie, size 13, 0-12, and assigns values of '0' against each of the number initially

// Now, it traverses the array and against each array element, it updates the entry of hash array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "enter the size of array: " << endl;
    cin >> size;

    int arr[size];

    cout << "enter the elements of array: " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Suppose the entries would be from the range (0, 12)
    
    // Pre-computation
    int hash[13] = {0}; // To add 0 as the default value
    for (int i = 0; i < size; i++){
        hash[arr[i]] += 1;
    }

    int queries;
    cout << "enter the number of queries: " << endl;
    cin >> queries;

    // Fetching
    while (queries--) {
        int target;
        cout << "enter the element to search: " << endl;
        cin >> target;

        cout << target << " occours: " << hash[target] << " times" << endl;
    }

    return 0;
}

// In this approach, we did a single pre-computation and all the queries got resolved in one go

// But, this method worked because the range of indexes that can appear is very small, but it fails for a big range, eg, what if the range be 10^9