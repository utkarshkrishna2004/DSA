#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int d = 20; // do the rotation 20 times

    int n = arr.size();

    d = d % n;

    for (int i = 0; i < d; i++) {
        
        int temp = arr[0];

        for (int i = 1; i < n; i++) {
            arr[i-1] = arr[i];
        }
    
        arr[n-1] = temp;
        
    }
    

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    return 0;
}