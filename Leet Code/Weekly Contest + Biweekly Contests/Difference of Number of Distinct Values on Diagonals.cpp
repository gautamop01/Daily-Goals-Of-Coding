

class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> sol(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                unordered_set<int> tl;
                unordered_set<int> bottomRight;
                
                toplefti(grid, i-1, j-1, tl);
                bottomright(grid, i+1, j+1, bottomRight, m, n);
                
               sol[i][j] = abs(static_cast<int>(tl.size() - bottomRight.size()));

            }
        }
        
        return sol;
    }
    
private:
    void toplefti(vector<vector<int>>& grid, int i, int j, unordered_set<int>& set1) {
        if (i < 0 || j < 0) {
            return;
        }
        
        set1.insert(grid[i][j]);
        toplefti(grid, i-1, j-1, set1);
    }
    
    void bottomright(vector<vector<int>>& grid, int i, int j, unordered_set<int>& set2, int m, int n) {
        if (i >= m || j >= n) {
            return;
        }
        
        set2.insert(grid[i][j]);
        bottomright(grid, i+1, j+1, set2, m, n);
    }
};
// yeahhh
