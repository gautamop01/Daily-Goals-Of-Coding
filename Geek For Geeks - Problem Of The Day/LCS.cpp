#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

/* Recursio */
class Solution1
{
public:
    int lcs(int n, int m, string s1, string s2)
    {
        if (m == 0 || n == 0)
            return 0;
        if (s1[n - 1] == s2[m - 1])
            return 1 + lcs(n - 1, m - 1, s1, s2);
        else
            return max(lcs(n, m - 1, s1, s2), lcs(n - 1, m, s1, s2));
    }

    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }
};

/* DP */
class Solution2
{
public:
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
};

int main()
{
    Solution1 solution1;
    Solution2 solution2;
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n = s1.length();
    int m = s2.length();
    cout << "Recursion - Length of LCS: " << solution1.lcs(n, m, s1, s2) << endl;
    cout << "DP - Length of LCS: " << solution2.lcs(n, m, s1, s2) << endl;
    return 0;
}








