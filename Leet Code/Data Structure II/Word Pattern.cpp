class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> c2w;
        unordered_map<string, char> w2c;
        stringstream ss(s);
        string word;
        int i = 0;
        while (getline(ss, word, ' ')) {
            if (i == pattern.length()) return false;
            char c = pattern[i];
            if (c2w.count(c) && c2w[c] != word) return false;
            if (w2c.count(word) && w2c[word] != c) return false;
            c2w[c] = word;
            w2c[word] = c;
            i++;
        }
        return i == pattern.length();
    }
};
