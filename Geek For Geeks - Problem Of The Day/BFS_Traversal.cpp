class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfsTraversal; // To store the BFS traversal result
        vector<bool> visited(V, false); // To keep track of visited vertices
        queue<int> q; // Queue to perform BFS

        // Start BFS from the first vertex (vertex 0)
        q.push(0); // Enqueue the starting vertex (vertex 0) into the queue
        visited[0] = true; // Mark the starting vertex as visited

        // Continue the BFS traversal until the queue becomes empty
        while (!q.empty()) {
            int currentVertex = q.front(); // Get the front vertex from the queue
            q.pop(); // Dequeue the front vertex
            bfsTraversal.push_back(currentVertex); // Add the current vertex to the BFS result

            // Visit all the adjacent vertices of the current vertex
            for (int neighbor : adj[currentVertex]) {
                if (!visited[neighbor]) { // If the adjacent vertex is not visited
                    visited[neighbor] = true; // Mark the adjacent vertex as visited
                    q.push(neighbor); // Enqueue the adjacent vertex into the queue to explore later
                }
            }
        }

        return bfsTraversal; // Return the BFS traversal result
    }
};
