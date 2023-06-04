// Number of Enclaves

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;

        // Check the first and last rows
        for(int j=0;j<m;j++){
            if(grid[0][j]==1){
                dfs(grid, 0, j);
            }
            if(grid[n-1][j]==1){
                dfs(grid, n-1, j);
            }
        }

        // Check the first and last columns (excluding the corners)
        for(int i=1;i<n-1;i++){
            if(grid[i][0]==1){
                dfs(grid, i, 0);
            }
            if(grid[i][m-1]==1){
                dfs(grid, i, m-1);
            }
        }

        // Count the remaining enclaves
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
        }

        return ans;
    }

    // Depth-first search to mark connected cells as visited
    void dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=1){
            return;
        }
        grid[i][j] = 2;
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
    }
};

// Number of .....

// class Solution {
// public:
//     int numEnclaves(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int ans=0;

//         for(int i=1;i<n-1;i++){
//             for(int j=1;j<m-1;j++){
//                 if(grid[i][j]==1){
//                     if(grid[i-1][j] == 0 && grid[0][j]==0)
//                     ans++;
//                 }

//             }
//         }
//         return ans;
//     }
// };



// Number of 
// class Solution {
// public:
//     bool isValid(int x, int y, int n, int m, vector<vector<int>>& grid) {
//         return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 0;
//     }

//     void dfs(int i, int j, int n, int m, vector<vector<int>>& grid){
//         grid[i][j] = 1;
//         int ax[4] = {1, -1, 0, 0};
//         int ay[4] = {0, 0, 1 , -1};

//         for(int k=0;k<4;k++){
//             int nx = i+ax[k];
//             int ny = j+ay[k];

//             if(isValid(nx, ny, n, m, grid)){
//                 dfs(nx, ny, n, m, grid);
//             }
//         }
//     }

//     int numEnclaves(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int ans = 0;

//         // check boundary
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if((i*j == 0 || i == n-1 || j == m-1) && grid[i][j]==0){
//                     dfs(i, j, n, m, grid);
//                 }
//             }
//         }

//         // Now check whole grid
//         for(int i=1;i<n-1;i++){
//             for(int j=1;j<m-1;j++){
//                 if(grid[i][j] == 0){
//                     ans++;
//                     dfs(i, j, n, m, grid);
//                 }
//             }
//         }
//         return ans;
//     }
// };
