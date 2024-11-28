#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& arr, int low, int high){
    int pivot = arr[low]; // Choosing the first element as the pivot
    int i = low;
    int j = high;

    while(i < j){
        // Increment i until an element greater than the pivot is found
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }

        // Decrement j until an element smaller than or equal to the pivot is found
        while(arr[j] > pivot && j >= low+1){
            j--;
        }

        if(i < j) {
            // i hasn't crossed j, swap i and j
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // j has crossed i

    // swap pivot and j to get partition index
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // partition index
}

void qs(vector<int>& arr, int low, int high){
    if(low < high){
        // Get partition index and recurse on the left and right subarrays
        int partition = func(arr, low, high);
        
        qs(arr, low, partition-1);
        qs(arr, partition+1, high);
    }
}

void quickSort(vector <int>& arr, int size) {
    // qs(arr, low, high);
    qs(arr, 0, size-1);
}

int main() {
    int size;
    
    cout << "enter the size of array: " << endl;
    cin >> size;

    vector <int> arr(size);
    
    cout << "enter the elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "array elements are: " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    // quick-sort
    quickSort(arr, size);

    cout << "sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    
    cout << endl;
    return 0;
}