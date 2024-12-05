// Union of 2 SORTED arrays

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 9};

    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> unionArray;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i]){
                unionArray.emplace_back(arr1[i]);
            }
            i++;
        }

        else {
            if (unionArray.size() == 0 || unionArray.back() != arr2[j]){
                unionArray.emplace_back(arr2[j]);
            }
            j++;
        }  
    }
    
    while(j < n2) {
        if (unionArray.size() == 0 || unionArray.back() != arr2[j]){
            unionArray.emplace_back(arr2[j]);
        }
        j++;
    }

    while(i < n1) {
        if (unionArray.size() == 0 || unionArray.back() != arr1[i]){
            unionArray.emplace_back(arr1[i]);
        }
        i++;
    }

    // Printing
    for (int i = 0; i < unionArray.size(); i++) {
        cout << unionArray[i] << " | ";
    }

    cout << endl;

    return 0;
}