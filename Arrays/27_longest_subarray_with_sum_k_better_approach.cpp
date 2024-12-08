// better approach
// use of hashing

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2 ,3};
    int k = 3;

    map<long long, int> preSumMap;

    long long sum = 0;

    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }

        int rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        
        preSumMap[sum] = i;
    }
    

    cout << "length: " << maxLen << endl;
    

    return 0;
}

// T.C. = O( n^2 )
// S.C. = O( 1 )