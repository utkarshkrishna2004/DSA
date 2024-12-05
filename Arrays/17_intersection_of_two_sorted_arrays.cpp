// Union of 2 SORTED arrays

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 3, 5, 6, 6, 7};

    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> result;

    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            if(result.empty() || result.back() != arr1[i]){
                result.emplace_back(arr1[i]);
            }
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j]){
            i++;
        }

        else {
            j++;
        }
    }


    // Printing
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " | ";
    }

    cout << endl;

    return 0;
}