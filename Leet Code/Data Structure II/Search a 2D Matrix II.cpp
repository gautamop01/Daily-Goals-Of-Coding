// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==target){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for (int i = 0; i < m; i++) {
            int left = 0;
            int right = n - 1;
            
            // Perform binary search on the current row
            while (left <= right) {
                int mid = left + (right - left) / 2;
                
                if (matrix[i][mid] == target)
                    return true;
                
                if (matrix[i][mid] < target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        
        return false;
    }
};
