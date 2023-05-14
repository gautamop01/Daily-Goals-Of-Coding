class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
}
        int n = triangle.size();  // row
        int m = triangle[0].size(); // column
        int mini;
        int sum=0;
        for(int i=0;i<n;i++){
            mini=triangle[i][0];
            for(int j=0; j<m;j++ ){
             mini = min(triangle[i][j],mini);
            }
            sum+=mini;
           m++;
        }
        return sum;
    }
};

// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int n = triangle.size(); 
//         vector<int> dp(triangle.back());

//         // Backtraking
//         for (int i = n - 2; i >= 0; i--) {
//             for (int j = 0; j <= i; j++) {
//                 dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
//             }
//         }
        
//         return dp[0]; 
//     }
// };
