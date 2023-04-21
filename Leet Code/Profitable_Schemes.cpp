class Solution {
public:
    int dp[101][101][101];
    int mod = 1e9 + 7;
    int solve(int n, int minprofit, vector<int> &group, vector<int> &profit, int start)
    {
        if(n<0) return 0;
        if(start==profit.size() && minprofit<=0) return 1;
        if(start==profit.size()) return 0;
        if(dp[n][minprofit][start] != -1) return dp[n][minprofit][start];
        long long a = solve(n-group[start], max(0, minprofit-profit[start]),group, profit, start+1);

        long long b = solve(n, minprofit,group, profit, start+1);
        return dp[n][minprofit][start] = (a+b)%mod;
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp, -1, sizeof(dp));
        return solve(n, minProfit, group, profit, 0);
    }
};
