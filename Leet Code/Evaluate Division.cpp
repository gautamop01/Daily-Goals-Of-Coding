// class Solution {
// public:
//     vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
//         unordered_map<string, unordered_map<string, double>> graph;
        
//         // Step 1: Build the graph
//         buildGraph(equations, values, graph);
        
//         // Step 2: Evaluate each query
//         vector<double> results;
//         for (const auto& query : queries) {
//             unordered_set<string> visited;
//             double result = evaluateQuery(query[0], query[1], graph, visited);
//             results.push_back(result);
//         }
        
//         return results;
//     }
    
// private:
//     // Helper function to build the graph
//     void buildGraph(vector<vector<string>>& equations, vector<double>& values, unordered_map<string, unordered_map<string, double>>& graph) {
//         int n = equations.size();
//         for (int i = 0; i < n; i++) {
//             const string& a = equations[i][0];
//             const string& b = equations[i][1];
//             double value = values[i];
            
//             // Add the equation (a / b)
//             graph[a][b] = value;
            
//             // Add the equation (b / a)
//             graph[b][a] = 1.0 / value;
//         }
//     }
    
//     // Helper function to evaluate a query
//     double evaluateQuery(const string& a, const string& b, unordered_map<string, unordered_map<string, double>>& graph, unordered_set<string>& visited) {
//         // If either variable is not present in the graph, return -1.0
//         if (graph.find(a) == graph.end() || graph.find(b) == graph.end())
//             return -1.0;
        
//         // If the query is (a / a), return 1.0
//         if (a == b)
//             return 1.0;
        
//         visited.insert(a);
//         for (const auto& neighbor : graph[a]) {
//             const string& next = neighbor.first;
//             if (visited.find(next) == visited.end()) {
//                 double result = evaluateQuery(next, b, graph, visited);
//                 if (result != -1.0)
//                     return neighbor.second * result;
//             }
//         }
//         visited.erase(a);
        
//         return -1.0;
//     }
// };




class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, string> parent;
        unordered_map<string, double> weight;
        
        // Step 1: Union-find initialization
        for (int i = 0; i < equations.size(); i++) {
            const string& a = equations[i][0];
            const string& b = equations[i][1];
            double value = values[i];
            
            // Add variables and their parent and weight
            if (!parent.count(a)) {
                parent[a] = a;
                weight[a] = 1.0;
            }
            if (!parent.count(b)) {
                parent[b] = b;
                weight[b] = 1.0;
            }
            
            // Union operation
            string parentA = findParent(a, parent, weight);
            string parentB = findParent(b, parent, weight);
            parent[parentA] = parentB;
            weight[parentA] = value * weight[b] / weight[a];
        }
        
        // Step 2: Evaluate each query
        vector<double> results;
        for (const auto& query : queries) {
            const string& a = query[0];
            const string& b = query[1];
            
            // If either variable is not present, return -1.0
            if (!parent.count(a) || !parent.count(b)) {
                results.push_back(-1.0);
                continue;
            }
            
            string parentA = findParent(a, parent, weight);
            string parentB = findParent(b, parent, weight);
            
            // If the variables have different parents, return -1.0
            if (parentA != parentB)
                results.push_back(-1.0);
            else
                results.push_back(weight[a] / weight[b]);
        }
        
        return results;
    }
    
private:
    // Helper function to find the parent of a variable using path compression
    string findParent(const string& x, unordered_map<string, string>& parent, unordered_map<string, double>& weight) {
        if (x != parent[x]) {
            string origParent = parent[x];
            parent[x] = findParent(parent[x], parent, weight);
            weight[x] *= weight[origParent];
        }
        return parent[x];
    }
};

