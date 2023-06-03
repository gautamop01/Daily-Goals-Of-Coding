class Solution {
public:
    int curr=0,maxx=0;
    void dfs(vector<int> adj[],vector<int>& informTime,int src)
    {
        if(adj[src].size()==0)//leaf node or last subordinate
        {
            maxx=max(maxx,curr);
            return ;
        }
        curr+=informTime[src];
        for(auto it : adj[src])
            dfs(adj,informTime,it);
        curr-=informTime[src];
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) 
    {
        vector<int> adj[n];
        for(int i=0;i<n;i++)
            if(manager[i]!=-1)
                adj[manager[i]].push_back(i);
        dfs(adj,informTime,headID);
        return maxx;
    }
};

/*
class Solution {
public:
    int curr = 0; // Current accumulated time during the depth-first search
    int maxx = 0; // Maximum time needed to inform all employees

    void dfs(vector<int> adj[], vector<int>& informTime, int src) {
        if (adj[src].size() == 0) { // If the current node is a leaf node or has no subordinates
            maxx = max(maxx, curr); // Update the maximum time if necessary
            return;
        }

        curr += informTime[src]; // Accumulate the current employee's inform time

        for (auto it : adj[src]) // Recursively traverse each subordinate
            dfs(adj, informTime, it);

        curr -= informTime[src]; // Backtrack and subtract the current employee's inform time
    }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[n]; // Create an adjacency list to represent the tree structure

        for (int i = 0; i < n; i++) {
            if (manager[i] != -1)
                adj[manager[i]].push_back(i); // Add each employee as a subordinate to their manager
        }

        dfs(adj, informTime, headID); // Perform depth-first search starting from the head employee
        return maxx; // Return the maximum time needed to inform all employees
    }
};

*/
