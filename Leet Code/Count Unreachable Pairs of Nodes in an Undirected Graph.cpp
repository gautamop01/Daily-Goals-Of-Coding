/*
You are given an integer n. There is an undirected graph with n nodes, numbered from 0 to n - 1. You are given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting nodes ai and bi.

Return the number of pairs of different nodes that are unreachable from each other.

 

Example 1:


Input: n = 3, edges = [[0,1],[0,2],[1,2]]
Output: 0
Explanation: There are no pairs of nodes that are unreachable from each other. Therefore, we return 0.
Example 2:


Input: n = 7, edges = [[0,2],[0,5],[2,4],[1,6],[5,4]]
Output: 14
Explanation: There are 14 pairs of nodes that are unreachable from each other:
[[0,1],[0,3],[0,6],[1,2],[1,3],[1,4],[1,5],[2,3],[2,6],[3,4],[3,5],[3,6],[4,6],[5,6]].
Therefore, we return 14.
 

Constraints:

1 <= n <= 105
0 <= edges.length <= 2 * 105
edges[i].length == 2
0 <= ai, bi < n
ai != bi
There are no repeated edges.
*/



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
