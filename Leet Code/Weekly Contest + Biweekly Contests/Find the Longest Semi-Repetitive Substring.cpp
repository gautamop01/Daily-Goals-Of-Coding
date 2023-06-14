
class Solution {
public:
    int longestSemiRepetitiveSubstring(std::string s) {
        int ans = 1;
        int count = 0;
        int left = 0;
        int right = 0;
        
        while (right < s.length()) {
            if (right > 0 && s[right - 1] == s[right]) {
                count += 1;
            }
            
            while (count > 1) {
                if (left < right && s[left] == s[left + 1]) {
                    count -= 1;
                }
                left += 1;
            }
            
            ans = std::max(ans, right - left + 1);
            right += 1;
        }
        
        return ans;
    }
};
