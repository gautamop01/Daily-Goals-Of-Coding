class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfsTraversal;
        vector<bool> visited(V, false); // To keep track of visited vertices
        queue<int> q;

        // Start BFS from the first vertex (vertex 0)
        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();
            bfsTraversal.push_back(currentVertex);

            // Visit all the adjacent vertices of the current vertex
            for (int neighbor : adj[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return bfsTraversal;
    }
};
