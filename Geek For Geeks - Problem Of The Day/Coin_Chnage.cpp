class Solution {
public:
    long long int count(int coins[], int N, int sum) {
        // Initialize dp array with zeros to keep track of ways to make change for different amounts
        vector<long long int> dp(sum + 1, 0);
        
        // There's one way to make change for amount 0 (by not using any coin)
        dp[0] = 1;
        
        // Iterate through coin denominations
        for (int j = 0; j < N; ++j) {
            // Start iterating through dp array from coins[j] because smaller amounts cannot be made with this coin
            for (int i = coins[j]; i <= sum; ++i) {
                // Accumulate the ways to make change using current coin denomination
                // dp[i - coins[j]] represents the ways to make change for the remaining amount after using the current coin
                dp[i] += dp[i - coins[j]];
            }
        }
        
        // Return the number of ways to make change for the given sum
        return dp[sum];
    }
};
