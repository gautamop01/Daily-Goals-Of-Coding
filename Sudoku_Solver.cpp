//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    bool isvalid(int row,int col,int val,int grid[9][9]){
        for(int i=0;i<9;i++){
            if(grid[row][i]==val)return false;
            if(grid[i][col]==val)return false;
            if(grid[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==val)return false;
        }
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int k=1;k<=9;k++){
                        if(isvalid(i,j,k,grid)){
                            grid[i][j]=k;
                            if(SolveSudoku(grid))return true;
                            else grid[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
                // cout<<endl;
            }
        }
    }
};




//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends






//--------------------------------------------------------LEETCODE PROBLEM---------------------------------------


class Solution {
public:
    void solveSudoku(vector<vector<char>>& m) {
        solve(m);
        
    }
    
    bool solve(vector<vector<char>> & m){
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j] == '.'){
                    for(char c='1';c<='9';c++){
                    if(isValid(m,i,j,c)){
                        m[i][j]=c;
                        if(solve(m) == true)
                            return true;
                        else
                            m[i][j]='.';
                    }
                    }
                    return false;
                }
            }
        }
        return true;
    }
        
        bool isValid(vector<vector<char>>& m, int row, int col, char c){
            for(int i=0;i<9;i++){
                if(m[i][col]==c)
                    return false;
                
                if(m[row][i]==c)
                    return false;
                
                if(m[3*(row/3) + i /3][3*(col/3) + i%3] == c)
                    return false;
            }
        return true;
    }
};
