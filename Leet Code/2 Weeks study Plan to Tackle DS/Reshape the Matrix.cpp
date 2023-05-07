
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(n*m != r*c){
        return mat;
        }

        vector<vector<int>> result(r, vector<int>(c));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int index = i*c+j;
                int raw = index/m;
                int col = index % m;
                result[i][j] = mat[raw][col];
            }
        }
        return result;

  
    }
};
