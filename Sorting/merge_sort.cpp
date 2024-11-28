#include<bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr, int low, int mid, int high){
    vector <int> temp;
    // [low ... mid]
    // [low ... mid+1]
    int left = low;
    int right = mid + 1;

    // for the elements present in left and right
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]) {
            temp.emplace_back(arr[left]);
            left++;
        }

        else {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    
    // incase, elements remains in left(and, right is exhausted)
    while(left <= mid) {
        temp.emplace_back(arr[left]);
        left++;
    }
    
    // incase, elements remains in right(and, left is exhausted)
    while(right <= high) {
        temp.emplace_back(arr[right]);
        right++;
    }

    // putting the elements from temp to our original array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];

        // arr[0] = temp[0-0]
        // arr[1] = temp[1-0]
        // arr[2] = temp[2-0]
    }

}

void mS(vector <int> &arr, int low, int high){
   if (low >= high) return;
   
   int mid = (low + high) / 2;
   
   mS(arr, low, mid);
   mS(arr, (mid + 1), high);
   merge(arr, low, mid, high);
}

void mergeSort(vector <int> &arr, int size){
    // mS( arr, low, high );
    mS( arr, 0, size-1 );
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
    
    // merge-sort
    mergeSort(arr, size);

    cout << "sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    
    cout << endl;
    return 0;
}