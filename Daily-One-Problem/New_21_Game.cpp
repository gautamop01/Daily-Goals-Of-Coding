class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k + maxPts)
            return 1.0;
        
        vector<double> dp(n + 1);
        dp[0] = 1.0;
        double sumProb = 1.0;
        double result = 0.0;
        
        for (int i = 1; i <= n; ++i) {
            dp[i] = sumProb / maxPts;
            
            if (i < k)
                sumProb += dp[i];
            else
                result += dp[i];
            
            if (i - maxPts >= 0)
                sumProb -= dp[i - maxPts];
        }
        
        return result;
    }
};
