// Linear Search
// Check whether a given num exists in an array or not

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};

    int num = 6;

    bool flag = false;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == num) {
            flag = true;
        }
    }

    cout << "status: " << flag << endl;
    

    return 0;
}