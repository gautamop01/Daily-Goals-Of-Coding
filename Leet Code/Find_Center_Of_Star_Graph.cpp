// class Solution {
// public:
//     int findCenter(vector<vector<int>>& edges) {
//         for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                if(edges[i][j]==edges[i+1][j])
//            }
//         }
//     }
// };



class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<int> degree(n + 1, 0);
        for(int i = 0; i < edges.size(); i++){
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
        }
        for(int i = 1; i <= n; i++){
            if(degree[i] == n - 1){
                return i;
            }
        }
        return -1;
    }
};
