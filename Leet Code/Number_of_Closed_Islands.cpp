/*Given a 2D grid consists of 0s (land) and 1s (water).  An island is a maximal 4-directionally connected group of 0s and a closed island is an island totally (all left, top, right, bottom) surrounded by 1s.

Return the number of closed islands.

 

Example 1:



Input: grid = [[1,1,1,1,1,1,1,0],[1,0,0,0,0,1,1,0],[1,0,1,0,1,1,1,0],[1,0,0,0,0,1,0,1],[1,1,1,1,1,1,1,0]]
Output: 2
Explanation: 
Islands in gray are closed because they are completely surrounded by water (group of 1s).
Example 2:



Input: grid = [[0,0,1,0,0],[0,1,0,1,0],[0,1,1,1,0]]
Output: 1
Example 3:

Input: grid = [[1,1,1,1,1,1,1],
               [1,0,0,0,0,0,1],
               [1,0,1,1,1,0,1],
               [1,0,1,0,1,0,1],
               [1,0,1,1,1,0,1],
               [1,0,0,0,0,0,1],
               [1,1,1,1,1,1,1]]
Output: 2
 

Constraints:

1 <= grid.length, grid[0].length <= 100
0 <= grid[i][j] <=1
*/

class Solution {
public:
    bool isValid(int x, int y, int n, int m, vector<vector<int>>& grid) {
        return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 0;
    }

    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid){
        grid[i][j] = 1;
        int ax[4] = {1, -1, 0, 0};
        int ay[4] = {0, 0, 1 , -1};

        for(int k=0;k<4;k++){
            int nx = i+ax[k];
            int ny = j+ay[k];

            if(isValid(nx, ny, n, m, grid)){
                dfs(nx, ny, n, m, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        // check boundary
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i*j == 0 || i == n-1 || j == m-1) && grid[i][j]==0){
                    dfs(i, j, n, m, grid);
                }
            }
        }

        // Now check whole grid
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j] == 0){
                    ans++;
                    dfs(i, j, n, m, grid);
                }
            }
        }
        return ans;
    }
};
