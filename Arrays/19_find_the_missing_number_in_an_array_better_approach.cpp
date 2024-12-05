// Better approach, use of hashing

#include<bits/stdc++.h>
using namespace std;

int main() {
    //int num = 5 // array might have elements from 1 to 5
    vector<int> arr = {1, 2, 3, 5};

    int missing;

    // elements are from 1 to 5, so we need a hash array of size 6(as, only then we can get indexes from 0 to 5)
    vector<int> hash(6, 0);

    for (int i = 0; i < arr.size(); i++) {
        hash[arr[i]] = 1;
    }
    
    for (int i = 1; i < hash.size(); i++) {
        if (hash[i] == 0) {
            missing = i;
        }
        
    }
    

    // Printing
    cout << "missing element: " << missing;


    cout << endl;

    return 0;
}