class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0); // Stores the color of each node (0: uncolored, 1: color A, -1: color B)
        
        for (int i = 0; i < n; i++) {
            if (color[i] == 0) { // If the node is uncolored
                if (!dfs(graph, color, i, 1)) {
                    return false;
                }
            }
        }
        
        return true;
    }
    
private:
    bool dfs(vector<vector<int>>& graph, vector<int>& color, int node, int c) {
        color[node] = c; // Color the current node
        
        for (int neighbor : graph[node]) {
            if (color[neighbor] == c) { // If the neighbor has the same color, it's not bipartite
                return false;
            }
            
            if (color[neighbor] == 0 && !dfs(graph, color, neighbor, -c)) {
                // If the neighbor is uncolored, recursively color it with the opposite color
                return false;
            }
        }
        
        return true;
    }
};
