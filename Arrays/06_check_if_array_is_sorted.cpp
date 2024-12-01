// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = { 1, 2, 2, 3, 3, 4};

//     int temp = INT_MIN;
//     bool flag = false;

//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] >= temp){
//             temp = arr[i];
//             flag = true;            
//         }

//         else {
//             flag = false;
//             break;
//         }
    
//     }

//     cout << "result: " << flag << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = { 1, 2, 2, 3, 3};

    bool flag = true;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] >= arr[i-1]){
                   
        }

        else {
            flag = false;
        }
    }

    cout << "result: " << flag << endl;

    return 0;
}