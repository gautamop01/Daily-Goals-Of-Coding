/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n=s.size();
        int m=t.size();
        if(n==0) return true;
        if(m==0) return false;

        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
        }
        else{
            j++;
        }
        }
        return(i)==s.size();


        
    }
};
// This code beat 100%

//--------------------------------Using Recursion ---------------------------------------------------
class Solution {
    int isSubSequence(string& s1, string& s2, int i, int j)
{
    if (i == 0 || j == 0) {
        return 0;
    }
    if (s1[i - 1] == s2[j - 1]) {
        return  1 + isSubSequence(s1, s2, i - 1, j - 1);
    }
    else {
        return  isSubSequence(s1, s2, i, j - 1);
    }
}
 
public:
    bool isSubsequence(string s, string t) {
         int m = s.size();
    int n = t.size();
    if (m > n) {
        return false;
    }
    if (isSubSequence(s, t, m, n) == m) {
        return true;
    }
    else {
        return false;
    }
    }
};





// ------------------------------------------Using Dynamic Programming -----------------------------------------------------
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0)); // initialize a 2D vector with all 0s
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                if(s[i-1] == t[j-1]) {  // if the current characters match
                    dp[i][j] = dp[i-1][j-1] + 1; // increment the length of the LCS
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // take the maximum length of the LCS obtained by either ignoring the current character in s or t
                }
            }
        }
        return dp[m][n] == m; // check if the length of the LCS is equal to m
    }
};
