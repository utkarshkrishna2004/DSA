#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    int j = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    for (int i = (j + 1); i < arr.size(); i++) {
        
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
        
    } 

    // Printing
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    return 0;
}