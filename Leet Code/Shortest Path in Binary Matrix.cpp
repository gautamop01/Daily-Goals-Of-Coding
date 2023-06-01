#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Check if the start or end cell is blocked
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;
        
        // Directions for 8 neighboring cells
        vector<int> dirs{-1, 0, 1};
        
        // Create a queue for BFS
        queue<pair<int, int>> q;
        q.push({0, 0});  // Start from the top-left cell
        
        // Mark the start cell as visited
        grid[0][0] = 1;
        
        // BFS
        int pathLength = 1;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                
                // Check if we reached the bottom-right cell
                if (row == n - 1 && col == n - 1)
                    return pathLength;
                
                // Explore the neighboring cells
                for (int i : dirs) {
                    for (int j : dirs) {
                        int newRow = row + i;
                        int newCol = col + j;
                        
                        // Skip the current cell or out-of-bounds cells
                        if (newRow < 0 || newRow >= n || newCol < 0 || newCol >= n || grid[newRow][newCol] == 1)
                            continue;
                        
                        // Mark the neighboring cell as visited and enqueue it
                        grid[newRow][newCol] = 1;
                        q.push({newRow, newCol});
                    }
                }
            }
            
            // Increment the path length after exploring the current level
            pathLength++;
        }
        
        // There is no clear path to the bottom-right cell
        return -1;
    }
};
