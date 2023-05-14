class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int i = 0, maximum = 0;
        vector<int> ans(2);
        while (i < n) {
            int c = 0;
            int j = 0;
            while (j < mat[i].size()) {
                if (mat[i][j] == 1) c++;
                j++;
            }
            if (c > maximum) {
                ans[0] = i;
                ans[1] = c;
                maximum = c;
            }
            i++;
        }
        return ans;
    }
};
