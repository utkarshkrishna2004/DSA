// Union of 2 SORTED arrays

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 9};

    
    set<int> st;

    for (int i = 0; i < arr1.size(); i++) {
        st.insert(arr1[i]);
    }
    
    for (int i = 0; i < arr2.size(); i++) {
        st.insert(arr2[i]);
    }

    // Printing
    cout << "union: ";
    for(auto it: st){
        cout <<it << " | " ;
    }

    cout << endl;

    return 0;
}