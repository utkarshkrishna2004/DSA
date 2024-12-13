// optimal approach

/*
Algorithm:

1. Use an unordered_set to store all unique elements from the array for efficient lookup.
2. Iterate through the set:
   - If the current number does not have a predecessor (current - 1 is not in the set), it indicates the start of a new sequence.
   - Count the length of the sequence by checking consecutive elements in the set.
3. Track the longest sequence length encountered.
4. Output the longest sequence length.
*/


#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    int longest = 0;
    
    unordered_set<int> st;

    for (int i = 0; i < arr.size(); i++) {
        st.insert(arr[i]);
    }

    for(auto it: st) {
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;

            while (st.find(x+1) != st.end()) {
                cnt++;
                x = x+1;
            }
            
            longest = max(cnt, longest);
        }

        
    }
    
    cout << "longest: " << longest << endl;

    return 0;
}

