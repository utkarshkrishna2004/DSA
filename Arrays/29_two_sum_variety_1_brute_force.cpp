// variety 1: Find out whether there are two elements, 'a' and 'b' whose sum equals the target value (ie, Yes / No)

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    int n = arr.size();
    bool result = false;

    for (int i = 0; i < n; i++) {
        
        for (int j = 1; j < n; j++) {
            
            if (arr[i] + arr[j] == target) {
                result = true;
                break;
            }
        }

        if (result == true) {
            break;
        }
        
        
    }
    
    
    cout << "result: " << result << endl;

    return 0;
}