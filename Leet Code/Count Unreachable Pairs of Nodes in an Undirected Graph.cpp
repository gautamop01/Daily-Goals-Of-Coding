class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n);
        vector<int> sizes;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                int size = 0;
                dfs(i, adj, visited, size);
                sizes.push_back(size);
            }
        }
        long long ans = 0;
        long long sum = 0;
        for (int s : sizes) {
            ans += sum * s;
            sum += s;
        }
        return ans;
    }
    
    void dfs(int u, const vector<vector<int>>& adj, vector<bool>& visited, int& size) {
        visited[u] = true;
        ++size;
        for (int v : adj[u]) {
            if (!visited[v]) {
                dfs(v, adj, visited, size);
            }
        }
    }
};
