// Count the number of times an element appears in an array
// eg, |1|2|3|2|1|
// Count the number of times 2 appears


// Brute-Force
#include<bits/stdc++.h>
using namespace std;

int countOccourences(int n, int arr[], int size){
    int cnt = 0;

    for (int i = 0; i < size; i++) {
        if( arr[i] == n ){
            cnt += 1;
        }
    }

    return cnt;
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "enter the elements of the array: ";
    cout << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "enter the required number: ";
    cin >> target;
    int result = countOccourences(target, arr, size);
    cout <<"Times the required number occours: " << result << endl;


    return 0;
}



// In order to search a number 'n' we have to iterate the whole array of size 'N'. 
// So, the TC for finding a number is O(N)
// To find the no. of occourences of Q numbers is O(Q x N)
// That's where Hashing comes into play