class Solution {
public:
    int solve (vector<vector<int>> &piles, int i, int j, int k, vector<vector<int>> &dp) {
        if (k == 0)
            return 0;
        
        if (i >= piles.size())
            return INT_MIN;
        
        if (j >= piles[i].size())
            return solve (piles, i+1, 0, k, dp); 
			
        if (dp[i][k] != -1 && j == 0)
            return dp[i][k];
			
        int a = 0, b = 0;
        a = solve (piles, i, j+1, k-1, dp) + piles[i][j];  
        b = solve (piles, i+1, 0, k, dp);                   
        
        if (j == 0)
            dp[i][k] = max (a, b);
        
        return max (a, b);
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        
        int n = piles.size();
        vector<vector<int>> dp (n+1, vector<int> (k+1, -1));
        int ans = solve (piles, 0, 0, k, dp);
        return ans;
    }
};
