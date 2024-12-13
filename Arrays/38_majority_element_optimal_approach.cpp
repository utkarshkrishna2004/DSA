// optimal approach
// Moore's Voting Algorithm

/*
How the Code Works :-
 
Phase 1: Candidate Selection
- Start with an empty vote (cnt = 0).
- Iterate through the array:
- If the vote count (cnt) is 0, set the current element as the new candidate and initialize cnt = 1.
- If the current element matches the candidate, increment cnt.
- If the current element does not match the candidate, decrement cnt.
- By the end of this phase, the element variable contains the most likely majority element.

Phase 2: Validation
- Count the occurrences of the candidate (element) in the array (cnt1).
- Check if its count exceeds n/2:
- If yes, it is the majority element.
- Otherwise, no majority element exists.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n = arr.size();

    // Phase 1: Candidate Selection
    int cnt = 0;      // Counter to track votes
    int element = 0;  // Variable to store the current candidate

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            // If no candidate, choose the current element as the candidate
            cnt = 1;
            element = arr[i];
        } 
        
        else if (arr[i] == element) {
            // If the current element matches the candidate, increment count
            cnt++;
        } 
        
        else {
            // If the current element does not match, decrement count
            cnt--;
        }
    }

    // Phase 2: Validation
    int cnt1 = 0; // Counter to verify the actual frequency of the candidate
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            cnt1++;
        }
    }

    // Check if the candidate is actually the majority element
    if (cnt1 > n / 2) {
        cout << "Majority element: " << element << endl;
    } else {
        cout << "Majority element: not found" << endl;
    }

    return 0;
}

// T. C. = O(n)
// S. C. = O(1)