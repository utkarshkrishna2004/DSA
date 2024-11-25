// The map stores all the values in a sorted order.
// To prove this, lets iterate over the map

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
    unordered_map <int, int> mpp;
    for (int i = 0; i < size; i++) {
        mpp[arr[i]]++; // Increment count of arr[i] in the map
    }
     
        
    // Iterate over the map to display elements and their frequencies in sorted order

    // `it.first` is the key (unique element from the array)

    // `it.second` is the value (frequency of the element)
    for(auto it: mpp){
        cout << it.first << " --> " << it.second << endl;
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