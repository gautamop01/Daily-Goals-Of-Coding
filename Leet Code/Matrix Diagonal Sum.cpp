class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int sum1 = 0;
        int sum2 = 0;
        int sum3 = 0;
        int sum = 0;
        int j=0;
        for(int i=0;i<n;i++){
            // for(int j=0;j<n;j++){
                sum1+=mat[i][j];
                sum3 = mat[n/2][n/2];
                j++;
                
            // }
        }
        // Reverse Rows
        for(int i=0; i<n; i++) {
        for(int j=0; j<n/2; j++) {
            swap(mat[i][j], mat[i][n-j-1]);
        }
    }
    int k=0;
     for(int i=0;i<n;i++){
            // for(int j=0;j<n;j++){
                sum2+=mat[i][k];
                k++;
            // }
        }
    if(n%2 == 0){
        sum = sum1 + sum2;
    }
    else{
        sum = sum1 + sum2 - sum3;
    }
    
    return sum;

       
        
    }
};

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
