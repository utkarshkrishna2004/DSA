#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    vector<int> temp;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            temp.emplace_back(arr[i]);
        }
    }

    // temp = {1, 2, 3, 2, 4, 5, 1}

    for (int i = 0; i < temp.size(); i++) {
        arr[i] = temp[i];
    }
    
    for (int i = temp.size(); i < arr.size(); i++) {
        arr[i] = 0;
    }
    

    // Printing
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    
    return 0;
}