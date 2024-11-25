#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size){
   for (int i = 0; i <= (size-1); i++) {
        int j = i;

        while(j > 0 && arr[j-1] > arr[j]){
            
            //swap
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
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
    
    // insertion-sort

    insertion_sort(arr, size);

    cout << "sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    
    cout << endl;
    return 0;
}