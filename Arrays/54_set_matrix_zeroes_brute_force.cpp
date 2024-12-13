#include <bits/stdc++.h>
using namespace std;

// Function to mark an entire row as -1
void markRow(vector<vector<int>>& matrix, int i, int m) {
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1; // Mark non-zero elements as -1
        }
    }
}

// Function to mark an entire column as -1
void markColumn(vector<vector<int>>& matrix, int j, int n) {
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1; // Mark non-zero elements as -1
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };

    int n = matrix.size();    // Number of rows
    int m = matrix[0].size(); // Number of columns

    // Step 1: Mark rows and columns with -1 for original zeroes
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, i, m);
                markColumn(matrix, j, n);
            }
        }
    }

    // Step 2: Convert all -1 markers to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    // Printing the updated matrix
    cout << "Matrix after setting zeroes:\n";
    for (int i = 0; i < n; i++) { // Iterate over rows
        for (int j = 0; j < m; j++) { // Iterate over columns
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
