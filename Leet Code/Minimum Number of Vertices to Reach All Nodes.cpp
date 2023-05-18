class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // Create vectors to store the indegree and outdegree of each vertex
        vector<int> indegree(n, 0); // stores the indegree of each vertex
        vector<int> outdegree(n, 0); // stores the outdegree of each vertex
        
        // Calculate the indegree and outdegree for each vertex based on the given edges
        for (const auto& edge : edges) {
            int from = edge[0]; // source vertex of the edge
            int to = edge[1]; // destination vertex of the edge
            outdegree[from]++; // increment the outdegree of the source vertex
            indegree[to]++; // increment the indegree of the destination vertex
        }
        
        vector<int> result; // stores the result set of vertices
        
        // Find the vertices with an indegree of 0, which are the source vertices
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                result.push_back(i); // add the vertex with an indegree of 0 to the result set
            }
        }
        
        return result; // return the smallest set of source vertices
    }
};


// class Solution {
// public:
//     vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
//         vector<int> indegree(n, 0);
//         vector<int> outdegree(n, 0);
        
//         for (const auto& edge : edges) {
//             int from = edge[0];
//             int to = edge[1];
//             outdegree[from]++;
//             indegree[to]++;
//         }
        
//         vector<int> result;
//         for (int i = 0; i < n; i++) {
//             if (indegree[i] == 0) {
//                 result.push_back(i);
//             }
//         }
        
//         return result;
//     }
// };
