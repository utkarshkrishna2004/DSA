// brute approach

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2 ,3};
    int k = 3;

    int len = 0;

    for (int i = 0; i < arr.size(); i++) {
        
        int sum = 0;

        for (int j = i; j < arr.size(); j++) {
            
            sum = sum + arr[j]; 

            if(sum == k) {
                len = max(len, j - i + 1);
            }           
        }

    }

    cout << "length: " << len << endl;
    

    return 0;
}

// T.C. = O( n^2 )
// S.C. = O( 1 )