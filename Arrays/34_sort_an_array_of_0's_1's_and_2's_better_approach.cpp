// better approach, use 3 variables and iterate once

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            cnt0++;
        }
        
        else if (arr[i] == 1) {
            cnt1++;
        }
        
        else {
            cnt2++;
        } 
    }

    cout << cnt0 << endl;
    cout << cnt1 << endl;
    cout << cnt2 << endl;

    for (int i = 0; i < cnt0; i++) {
        arr[i] = 0;
    }
    
    for (int i = cnt0; i < (cnt0 + cnt1); i++) {
        arr[i] = 1;
    }
    
    for (int i = (cnt0 + cnt1); i < (cnt0 + cnt1 + cnt2); i++) {
        arr[i] = 2;
    }
    
    


    // Printing
    cout << "required output: ";

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    

    return 0;
}

// T.C. = O(2n)
// S.C. = O(1)
