// I think - this logic worked but this not working then i apply optamize this logic to direct fill matrix
// In first Logic - first make a normal matrix then comnvert this to spiral matrix like (Spiral matrix I)
// In second logic - Dirct make spiral using traverse 

// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int a) {
//         vector<vector<int>> matrix(a, vector<int>(a));
//         int k=1;
//         for(int i=0;i<a;i++){
//             for(int j=0;j<a;j++){
//                 matrix[i][j]=k;
//                 k++;
//             }
//         }
//         // matrix = [[1,2,3],[4,5,6],[7,8,9]]
//         vector<vector<int>> result;
//         int m = matrix.size();
//         if (m == 0) return result;
//         int n = matrix[0].size();
//         int left = 0, right = n - 1, top = 0, bottom = m - 1;
//         while (left <= right && top <= bottom) {
//             // Traverse the top row from left to right
//             vector<int> row;
//             for (int j = left; j <= right; j++) {
//                 row.push_back(matrix[top][j]);
//             }
//             result.push_back(row);
//             // Traverse the right column from top+1 to bottom
//             row.clear();
//             for (int i = top + 1; i <= bottom; i++) {
//                 row.push_back(matrix[i][right]);
//             }
//             result.push_back(row);
//             // Traverse the bottom row from right-1 to left
//             // Only if there is a bottom row and a right column
//             if (left < right && top < bottom) {
//                 row.clear();
//                 for (int j = right - 1; j >= left; j--) {
//                     row.push_back(matrix[bottom][j]);
//                 }
//                 result.push_back(row);
//                 // Traverse the left column from bottom-1 to top+1
//                 row.clear();
//                 for (int i = bottom - 1; i > top; i--) {
//                     row.push_back(matrix[i][left]);
//                 }
//                 result.push_back(row);
//             }
//             // Update the boundaries of the matrix to be processed
//             left++;
//             right--;
//             top++;
//             bottom--;
//         }
//         return result;
//         // Output: [[1,2,3],[8,9,4],[7,6,5]]

//     }
// };


// int main() {
//     Solution solution;
//     vector<vector<int>> result = solution.generateMatrix(3);
//     for (int i = 0; i < result.size(); i++) {
//         for (int j = 0; j < result[0].size(); j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


