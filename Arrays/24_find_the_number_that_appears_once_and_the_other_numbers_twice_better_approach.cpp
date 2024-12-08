#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};

    int num;

    int maximum = arr[0];

    for (int i = 0; i < arr.size(); i++) {
        maximum = max(maximum, arr[i]);
    }

    vector<int> hash(maximum + 1, 0); // to optimise more, use map<long long, int> for hashing, it avoids a lot of extra memory usage

    for (int i = 0; i < arr.size(); i++) {
        hash[ arr[i] ] += 1;
    }

    for (int i = 1; i < hash.size(); i++) {
        if (hash[i] == 1) {
            num = i;
            break;
        }
    }
    

    cout << "element appearing once: " << num << endl;
    

    return 0;
}

// implementation using map<long long, int> :-

// class Solution {
//   public:
//     int search(int n, int arr[]) {
//         
//         int ans; 
        
//         map<long long, int> hash;
        
//         for(int i = 0; i < n; i++) {
//             hash[ arr[i] ] += 1;
//         }
        
//         for(auto it: hash) {
//             if(it.second == 1) {
//                 ans = it.first;
//             }
//         }
        
//         return ans;
//     }
// };