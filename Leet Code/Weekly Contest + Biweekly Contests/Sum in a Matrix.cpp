class Solution {
public:
    int matrixSum(vector<vector<int>>& array1) {
        int anscnt = 0;
        for(int i = 0; i < array1.size(); i++) {
    sort(array1[i].begin(), array1[i].end());
}

        for(int i = 0; i < array1[0].size(); i++) {
            int m = 0;
            for(int j = 0; j < array1.size(); j++) {
                m = max(m, array1[j][i]);
            }
            anscnt += m;
        }
        return anscnt;
    }
};
