// variety 2: It is certain that there are two 'a' and 'b' whose sum equals the target value, find out the location(ie, indexes) of those 'a' and 'b'

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    int n = arr.size();
    vector<int> indexes;

    for (int i = 0; i < n; i++) {
        
        for (int j = i+1; j < n; j++) {
            
            if (arr[i] + arr[j] == target) {
                indexes.emplace_back(i); 
                indexes.emplace_back(j); 
                break;
            }
        }

        if (!indexes.empty()) {
            break;
        }
        
        
    }
    
    
    for (int i = 0; i < indexes.size(); i++) {
        cout << indexes[i] << " | ";
    }
    
    cout << endl;

    return 0;
}