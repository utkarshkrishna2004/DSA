// optimal approach
// Dutch National Flag Algorithm (DNF Algorithm)

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};

    int n = arr.size();

    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while( mid <= high ) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }  
    }


    // Printing
    cout << "required output: ";

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }

    cout << endl;
    

    return 0;
}

// T.C. = O(n)
// S.C. = O(1)
