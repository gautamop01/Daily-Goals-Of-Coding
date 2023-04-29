class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int> c;

        int i = 0;
        while (i < n) {
            unordered_map<int, int> mpa, mpb;
            int j = 0;
            while (j <= i) {
                mpa[a[j]]++;
                mpb[b[j]]++;
                j++;
            }

            int ans = 0;
            int k = 0;
            while (k <= i) {
                if (mpa.find(a[k]) != mpa.end() && mpb.find(b[k]) != mpb.end()) {
                    ans = ans + min(mpa[a[k]], mpb[a[k]]);
                }
                k++;
            }
            c.push_back(ans);
            i++;
        }
        return c;
    }
};
