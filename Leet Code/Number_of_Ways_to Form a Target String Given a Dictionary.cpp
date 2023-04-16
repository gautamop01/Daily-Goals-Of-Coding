class Solution {
public:
    int n, m, mod = 1e9 + 7;
    vector<vector<int>> v;
    vector<vector<int>> dp;
    string target;

    int dfs(int i, int j) {
        if (j == m) return 1;
        if (i == n) return 0;

        int& ans = dp[i][j];
        if (ans != -1) return ans;

        ans = dfs(i + 1, j);
        char c = target[j];
        ans = (ans + dfs(i + 1, j + 1) * 1LL * v[i][c - 'a']) % mod;

        return ans;
    }

    int numWays(vector<string>& words, string target) {
        this->target = target;
        n = words[0].size();
        m = target.size();

        v.resize(n, vector<int>(26, 0));
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < n; j++) {
                v[j][words[i][j] - 'a']++;
            }
        }

        dp.resize(n, vector<int>(m, -1));
        return dfs(0, 0);
    }
};
