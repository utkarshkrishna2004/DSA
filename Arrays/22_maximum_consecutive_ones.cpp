#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1};

    int maximum_ones = 0;
    int cnt = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            cnt += 1;
            maximum_ones = max(maximum_ones, cnt);
        }

        else {
            cnt = 0;
        }
        
    }

    cout << "maximum consecutive 1's: " << maximum_ones << endl;
    

    return 0;
}