#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 5;
    vector<int> arr = {1, 2, 4, 5};

    int missing;

    for (int i = 1; i <= num; i++) {
        
        bool flag = 0;

        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }   
        }

        if (flag == 0) {
            missing = i;
        }
        
        
    }
    

    // Printing
    cout << "missing element: " << missing;

    cout << endl;

    return 0;
}