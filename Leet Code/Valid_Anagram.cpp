// First Method -------------
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int n = s.size();
//         if(s.size() != t.size()) return false;
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s==t) return true;
//         else return false;
        
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
    
        int freq[26];
        for(int i=0;i<26;i++){
        freq[i] = 0;
        }

        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<t.length();i++){
            freq[t[i]-'a']--;
            if(freq[t[i] - 'a'] < 0){
                return false;
            }
        }

        return true;

        
    }
};
