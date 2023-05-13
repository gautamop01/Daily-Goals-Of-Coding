class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, curr, n, k, 1);
        return res;
    }
    
    void backtrack(vector<vector<int>>& res, vector<int>& curr, int n, int k, int start) {
        if (curr.size() == k) {
            res.push_back(curr);
            return;
        }
        for (int i = start; i <= n; i++) {
            curr.push_back(i);
            backtrack(res, curr, n, k, i + 1);
            curr.pop_back();
        }
    }
};
