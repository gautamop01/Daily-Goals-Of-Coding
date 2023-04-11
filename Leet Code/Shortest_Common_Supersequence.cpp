class Solution {
public:

   string LCS(string s1, string s2) {
    int m = s1.length(), n = s2.length();
    int dp[m+1][n+1];      // Define a 2D array to store the LCS length
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i==0 || j==0) dp[i][j] = 0;    // Base case: LCS length is 0 for empty strings
            else if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];   // If characters match, increment the LCS length
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);   // If characters don't match, take the maximum LCS length from the previous subproblems
        }
    }
    int i = m, j = n;    // Start from the last characters of both strings
    string lcs = "";     // Initialize the LCS string
    while(i>0 && j>0) {  // Traverse the 2D array in reverse order to find the LCS
        if(s1[i-1] == s2[j-1]) {    // If characters match, add the character to the LCS string
            lcs = s1[i-1] + lcs;
            i--, j--;               // Move to the previous diagonal cell
        }
        else {                      // If characters don't match, move to the cell with the maximum LCS length
            if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
    }
    return lcs;             // Return the LCS string
}

    string shortestCommonSupersequence(string s1, string s2) {
        string lcs = LCS(s1, s2);   // Find the LCS of the two strings
    int i=0, j=0;               // Initialize the indices for both strings
    string scs = "";            // Initialize the SCS string
    for(char c : lcs) {         // Traverse the LCS string
        while(s1[i] != c) scs += s1[i++];    // Add the characters of s1 before the current LCS character to the SCS string
        while(s2[j] != c) scs += s2[j++];    // Add the characters of s2 before the current LCS character to the SCS string
        scs += c, i++, j++;                  // Add the LCS character to the SCS string and move to the next characters in both strings
    }
    return scs + s1.substr(i) + s2.substr(j);
    }
};
