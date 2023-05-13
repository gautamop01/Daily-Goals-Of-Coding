class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        backtrack(res, s, 0);
        return res;
    }
    
    void backtrack(vector<string>& res, string& s, int i) {
        // if we have processed all characters in the string, add it to the result vector
        if (i == s.length()) {
            res.push_back(s);
            return;
        }
        // if the current character is a letter, try both lowercase and uppercase versions
        if (isalpha(s[i])) {
            s[i] = tolower(s[i]);
            backtrack(res, s, i + 1);
            s[i] = toupper(s[i]);
            backtrack(res, s, i + 1);
        }
        // if the current character is not a letter, move to the next character
        else {
            backtrack(res, s, i + 1);
        }
    }
};
