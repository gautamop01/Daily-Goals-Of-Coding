class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> result(n, vector<int>(m, INT_MAX));
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    result[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
    
        vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            
            for (auto dir : dirs) {
                int i = curr.first + dir.first;
                int j = curr.second + dir.second;
                
                if (i >= 0 && i < n && j >= 0 && j < m) {
                    if (result[i][j] > result[curr.first][curr.second] + 1) {
                        result[i][j] = result[curr.first][curr.second] + 1;
                        q.push({i, j});
                    }
                }
            }
        }
        
        return result;
    }
};
