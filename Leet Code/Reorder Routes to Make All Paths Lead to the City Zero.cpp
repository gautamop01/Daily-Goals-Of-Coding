
class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);
        int ans = 0;
        for (auto& c : connections) {
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(-c[0]);
        }
        dfs(0, adj, visited, ans);
        return ans;
    }
    
    void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited, int& ans) {
        visited[u] = true;
        for (int v : adj[u]) {
            if (!visited[abs(v)]) {
                ans += v > 0;
                dfs(abs(v), adj, visited, ans);
            }
        }
    }
};
