// O(n^3) complexity 
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &mat)
    {
        vector<vector<int> > copy;
        copy = mat;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(copy[i][j]==1){
                    for(int k=0;k<n;k++){
                        mat[k][j]=1;
                        mat[i][k]=1;
                    }
                }
            }
        }
    }
};

// Optamized Code O(n*m)
class Solution {
public:
    void booleanMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<bool> rowSet(m, false);
        vector<bool> colSet(n, false);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    rowSet[i] = true;
                    colSet[j] = true;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rowSet[i] || colSet[j]) {
                    mat[i][j] = 1;
                }
            }
        }
    }
};

