/*There are n piles of coins on a table. Each pile consists of a positive number of coins of assorted denominations.

In one move, you can choose any coin on top of any pile, remove it, and add it to your wallet.

Given a list piles, where piles[i] is a list of integers denoting the composition of the ith pile from top to bottom, and a positive integer k, return the maximum total value of coins you can have in your wallet if you choose exactly k coins optimally.

Example 1:

Input: piles = [[1,100,3],[7,8,9]], k = 2
Output: 101
Explanation:
The above diagram shows the different ways we can choose k coins.
The maximum total we can obtain is 101.
Example 2:

Input: piles = [[100],[100],[100],[100],[100],[100],[1,1,1,1,1,1,700]], k = 7
Output: 706
Explanation:
The maximum total can be obtained if we choose all coins from the last pile.*/
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
