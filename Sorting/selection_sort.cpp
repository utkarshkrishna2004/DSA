#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size){
    for (int i = 0; i <= (size-2); i++){
        int mini = i;
        for (int j = i; j <= (size-1); j++) {
            if (arr[j] < arr[mini] ) {
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int size;
    
    cout << "enter the size of array: " << endl;
    cin >> size;
    int arr[size];
    
    cout << "enter the elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "array elements are: " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    // selection-sort

    selection_sort(arr, size);

    cout << "sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    
    cout << endl;
    return 0;
}