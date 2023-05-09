// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int n1 = image.size();
// int n2 = image[0].size();
//         image[sr][sc]=color;
//         for(int i=0;i<n1;i++){
//             for(int j=0;j<n2;j++){
//                 if(i = sr && j == sc) continue;
//                 if(image[i][j]==image[sr][sc]){
//              image[j][i]=color;
//                 }
                
                
//             }
//         }
//         return image;
        
//     }
// };

/*class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        int oldColor = image[sr][sc];
        image[sr][sc]= color;   // now changed
        if(sr>0 && image[sr-1][sc]==oldColor) 
            image = floodFill(image,sr-1,sc,color);
        if(sr<image.size()-1 && image[sr+1][sc]==oldColor) 
            image = floodFill(image,sr+1,sc,color);
        if(sc>0 && image[sr][sc-1]==oldColor) 
            image = floodFill(image,sr,sc-1,color);
        if(sc<image[sr].size()-1 && image[sr][sc+1]==oldColor) 
            image = floodFill(image,sr,sc+1,color);
        return image;
    }
};*/

class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != oldColor) {
            return;
        }
        image[r][c] = newColor;
        dfs(image, r + 1, c, oldColor, newColor);
        dfs(image, r - 1, c, oldColor, newColor);
        dfs(image, r, c + 1, oldColor, newColor);
        dfs(image, r, c - 1, oldColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if (oldColor != newColor) {
            dfs(image, sr, sc, oldColor, newColor);
        }
        return image;
    }
};
