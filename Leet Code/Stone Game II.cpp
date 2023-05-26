class Solution {
public:
    int recur(vector<int>& a, vector<int>& suffix, int ind, int m, vector<vector<int>>& dp) {
        // Base case: If we have reached the end of the array, return 0.
        if (ind == a.size()) return 0;
        
        // If the remaining elements can be taken in one turn, return the suffix sum.
        if (ind + 2 * m >= a.size()) return suffix[ind];
        
        // If the subproblem has already been solved, return the stored result.
        if (dp[ind][m] != -1) return dp[ind][m];
        
        int t = INT_MAX;
        
        // Iterate over the next possible moves within the range of 1 to 2*m.
        for (int k = ind + 1; k <= ind + 2 * m; k++) {
            // Recursively calculate the minimum value the opponent can obtain.
            t = min(t, recur(a, suffix, k, max(m, k - ind), dp));
        }
        
        // Store the result in the dynamic programming table and return it.
        return dp[ind][m] = suffix[ind] - t;
    }
    
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        
        // Calculate the suffix sums of the array.
        vector<int> suffix(n, 0);
        suffix[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }
        
        // Create a dynamic programming table to store the results of subproblems.
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        
        // Start the recursive function from the beginning of the array with 1 as the initial M value.
        return recur(piles, suffix, 0, 1, dp);
    }
};
