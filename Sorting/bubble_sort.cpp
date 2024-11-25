#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size){
   for (int i = (size-1); i >= 0; i--) {
        
        int didswap = 0; // optimisation for best case(ie, sorted array)

        for (int j = 0; j <= (i-1); j++) {
            // swap
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                didswap = 1; // optimisation for best case(ie, sorted array)
            }   
        }

        // optimisation for best case(ie, sorted array)
        if (didswap == 0) {
            break;
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
    
    // bubble-sort

    bubble_sort(arr, size);

    cout << "sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    
    cout << endl;
    return 0;
}