#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        // for (int i = 0; i < n; i++) {
        //     reverse(matrix[i].begin(), matrix[i].end());
        // }
    }
};

int main() {
    // Create a test matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution solution;

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Rotate the matrix
    solution.rotate(matrix);

    cout << "Rotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
