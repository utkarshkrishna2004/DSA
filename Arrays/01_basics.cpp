#include<bits/stdc++.h>
using namespace std;

// array declared globally, holds 0 at all its places
int arr1[6];

int main() {
    // array declared inside main(), holds garbage values at all its places
    int arr2[6];

    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;

    cout << "---------" << endl;
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    return 0;
}