class Solution {
public:
    int minDistance(string word1, string word2) {
    int m = word1.size();
    int n = word2.size();
    
    // Initialize the dp table with all zeros
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    
    // Fill the first row and first column of the dp table
    for(int i = 0; i <= m; i++) {
        dp[i][0] = i;
    }
    for(int j = 0; j <= n; j++) {
        dp[0][j] = j;
    }
    
    // Fill the rest of the dp table
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(word1[i-1] == word2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
            }
        }
    }
    
    // Return the result
    return dp[m][n];
    }
};
