class Solution {
public:
    int minExtraChar(string inputString, vector<string>& dictionary) {
        unordered_set<string> dict;
        
        for (const string& wn : dictionary) {
            dict.insert(wn);
        }

        int n = inputString.length();
        vector<int> dp(n + 1);
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1] + 1;

            for (int j = i; j >= 1; j--) {
                string answer = inputString.substr(j - 1, i - j + 1);

                if (dict.count(answer)) {
                    dp[i] = min(dp[i], dp[j - 1]);
                }
            }
        }

        return dp[n];
    }
};
