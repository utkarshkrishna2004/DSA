// Hashing - Pre-storing and fetching

// Let we have a string and it can have entries from all possible ASCII values

// It creates another "hash array" of size 256

// Now, it traverses the array and against each string element, it updates the entry of hash array

// s = 'a b c d a b e f c'

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "enter the string: " << endl;
    cin >> s;

    // For all the ASCII values, the hash array size we need is 256
    

    // Pre-computation

    // if 'a' --> 97
    // if 'b' --> 98
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++){
        hash[s[i]] += 1;
    }

    int queries;
    cout << "enter the number of queries: " << endl;
    cin >> queries;

    // Fetching
    while (queries--) {
        char c;
        cout << "enter the character to search: " << endl;
        cin >> c;

        cout << c << " occours: " << hash[c] << " times" << endl;
    }

    return 0;
}