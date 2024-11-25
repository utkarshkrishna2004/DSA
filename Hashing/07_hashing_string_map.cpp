// string hashing using map

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "enter the string: " << endl;
    cin >> s;

    // pre-computation
    map <char, int> mpp;

    for (int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    // iterating over the map
    for(auto it: mpp){
        cout << it.first << " --> " << it.second << endl;
    }
    
    // fetching
    int queries;
    cout << "enter the number of queries: " << endl;
    cin >> queries;

    while (queries--) {
        char c;
        cout << "enter the character to search: " << endl;
        cin >> c;

        cout << c << " occours: " << mpp[c] << " times" << endl;
    }

    return 0;
}