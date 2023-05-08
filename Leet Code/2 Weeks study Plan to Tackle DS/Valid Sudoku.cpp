// class Solution {
// public:
//   bool CheckGrid(vector<vector<char>>& board) {
//     // Create a set to keep track of the digits
//     set<char> digits;
    
//     // Check the first 3x3 sub-grid (box)
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             char digit = board[i][j];
//             if (digit == '.') {
//                 continue; // Skip empty cells
//             }
//             if (digits.count(digit) > 0) {
//                 return false; // Digit already seen in the box
//             }
//             digits.insert(digit);
//         }
//     }
    
//     return true; // Box is valid
// }

//     bool isValidSudoku(vector<vector<char>>& board) {
//         int n = board.size();
//         int m = board[0].size();

//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 for(int k=0;k<n;k++){
//                     if((board[i][j]!=board[i][k] && board[i][j] != board[k][i]) && CheckGrid(board))
//                     return true;

//                 }
//             }
//         }
//         return false;
        
//     }
// };

class Solution {
public:
    bool CheckGrid(vector<vector<char>>& board, int startRow, int startCol) {
        set<char> digits;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                char digit = board[i][j];
                if (digit == '.') {
                    continue;
                }
                if (digits.count(digit) > 0) {
                    return false;
                }
                digits.insert(digit);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        // Check each row
        for (int i = 0; i < n; i++) {
            set<char> digits;
            for (int j = 0; j < m; j++) {
                char digit = board[i][j];
                if (digit == '.') {
                    continue;
                }
                if (digits.count(digit) > 0) {
                    return false;
                }
                digits.insert(digit);
            }
        }

        // Check each column
        for (int j = 0; j < m; j++) {
            set<char> digits;
            for (int i = 0; i < n; i++) {
                char digit = board[i][j];
                if (digit == '.') {
                    continue;
                }
                if (digits.count(digit) > 0) {
                    return false;
                }
                digits.insert(digit);
            }
        }

        // Check each 3x3 sub-grid
        for (int i = 0; i < n; i += 3) {
            for (int j = 0; j < m; j += 3) {
                if (!CheckGrid(board, i, j)) {
                    return false;
                }
            }
        }

        return true;
    }
};
