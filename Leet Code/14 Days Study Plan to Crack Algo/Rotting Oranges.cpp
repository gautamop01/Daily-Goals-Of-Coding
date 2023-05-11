#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int minutes = 0;
        int freshOranges = 0;
        queue<pair<int, int>> q;
        vector<pair<int, int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};
        
        // count fresh oranges and push rotten oranges to queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    freshOranges++;
                } else if (grid[i][j] == 2) {
                    q.push({i,j});
                }
            }
        }
        
        // start rotting process
        while (!q.empty() && freshOranges > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                for (auto dir : directions) {
                    int r = curr.first + dir.first;
                    int c = curr.second + dir.second;
                    if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1) {
                        grid[r][c] = 2;
                        q.push({r,c});
                        freshOranges--;
                    }
                }
            }
            minutes++;
        }
        
        if (freshOranges == 0) {
            return minutes;
        } else {
            return -1;
        }
    }
};
