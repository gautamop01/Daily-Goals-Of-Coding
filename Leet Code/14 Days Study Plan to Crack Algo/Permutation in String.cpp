class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n1 = s1.length(), n2 = s2.length();
    if (n1 > n2) return false;
    vector<int> freq1(26), freq2(26);
    for (char c : s1) freq1[c - 'a']++;
    for (int i = 0; i < n2; i++) {
        freq2[s2[i] - 'a']++;
        if (i >= n1) freq2[s2[i - n1] - 'a']--;
        if (freq1 == freq2) return true;
    }
    return false;
}


};
