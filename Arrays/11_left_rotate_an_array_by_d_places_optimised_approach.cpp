#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap( arr[start], arr[end] );
        start++;
        end--;
    }
}

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;

    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int d = 3; 

    leftRotate(arr, d);
    

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    return 0;
}