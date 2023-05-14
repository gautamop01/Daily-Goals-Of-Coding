class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int> c;

        int i = 0;
        while (i < n) {
            unordered_map<int, int> int1, int2;
            int j = 0;
            while (j <= i) {
                int1[a[j]]++;
                int2[b[j]]++;
                j++;
            }

            int ans = 0;
            int k = 0;
            while (k <= i) {
                if (int1.find(a[k]) != int1.end() && int2.find(b[k]) != int2.end()) {
                    ans = ans + min(int1[a[k]], int2[a[k]]);
                }
                k++;
            }
            c.push_back(ans);
            i++;
        }
        return c;
    }
};
