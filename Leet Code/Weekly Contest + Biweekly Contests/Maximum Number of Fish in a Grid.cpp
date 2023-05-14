class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis, int& sum) {
        int n = grid.size();
        int m = grid[0].size();
        sum += grid[i][j];
        vis[i][j] = 1;

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        int k = 0;
        while (k < 4) {
            int nrow = i + drow[k];
            int ncol = j + dcol[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] != 0 && !vis[nrow][ncol]) {
                dfs(nrow, ncol, grid, vis, sum);
            }
            k++;
        }
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int i = 0;
        while (i < n) {
            int j = 0;
            while (j < m) {
                if (grid[i][j] > 0 && !vis[i][j]) {
                    int sum = 0;
                    dfs(i, j, grid, vis, sum);
                    ans = max(ans, sum);
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};
