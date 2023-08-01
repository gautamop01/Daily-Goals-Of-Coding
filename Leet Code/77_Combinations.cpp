class Solution {
public:
    void solve(int ind, int start, int n, int k, vector<int> &ds, vector<vector<int>> &ans)
{
    if (ind == k)
    {
        ans.push_back(ds);
        return;
    }

    for (int num = start; num <= n; num++)
    {
            ds.push_back(num);
            solve(ind + 1, num + 1, n, k, ds, ans);
            ds.pop_back();
    }   
}
vector<vector<int>> combine(int n, int k)
{
    vector<int> ds;
    vector<vector<int>> ans;
    solve(0, 1, n, k, ds, ans);
    return ans;
}
};
