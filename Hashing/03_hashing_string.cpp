// Hashing - Pre-storing and fetching

// Let we have a string and it can have numbers as entries from smallcase alphabets( 'a' to 'z' )

// It creates another "hash array" of size 26

// Now, it traverses the array and against each string element, it updates the entry of hash array

// s = 'a b c d a b e f c'

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "enter the string: " << endl;
    cin >> s;

    // For smallcase 'a' to 'z', ASCII values are 97-122 (Total 26)
    

    // Pre-computation

    // 'a' - 'a' = 0
    // 'b' - 'a' = 1
    // 'c' - 'a' = 2
    // char - 'a' = index in the hash array
    int hash[26] = {0}; // To add 0 as the default value
    for (int i = 0; i < s.size(); i++){
        hash[s[i] - 'a'] += 1;
    }

    int queries;
    cout << "enter the number of queries: " << endl;
    cin >> queries;

    // Fetching
    while (queries--) {
        char c;
        cout << "enter the character to search: " << endl;
        cin >> c;

        cout << c << " occours: " << hash[c - 'a'] << " times" << endl;
    }

    return 0;
}