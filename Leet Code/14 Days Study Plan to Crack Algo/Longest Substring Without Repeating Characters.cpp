class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
    int ans = 0;
    unordered_set<char> st;
    for (int i = 0, j = 0; j < n; j++) {
        while (st.find(s[j]) != st.end()) {
            st.erase(s[i++]);
        }
        st.insert(s[j]);
        ans = max(ans, j - i + 1);
    }
    return ans;
        
    }
};               
