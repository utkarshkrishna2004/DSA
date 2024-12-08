#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};

    int num;

    for (int i = 0; i < arr.size(); i++) {
        
        int current_element = arr[i];
        int cnt = 0;

        for (int j = 0; j < arr.size(); j++) {
            
            if (arr[j] == current_element) {
                cnt += 1;
            }

        }

        if (cnt == 1) {
            num = current_element;
            break;
        }
        
    }

    cout << "element appearing once: " << num << endl;
    

    return 0;
}