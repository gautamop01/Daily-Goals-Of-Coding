/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return buildTree(grid, 0, n-1, 0, n-1);
    }
    
    Node* buildTree(vector<vector<int>>& grid, int rowStart, int rowEnd, int colStart, int colEnd) {
        // Check if the current grid is a leaf node
        bool isLeaf = true;
        int val = grid[rowStart][colStart];
        for (int i = rowStart; i <= rowEnd; i++) {
            for (int j = colStart; j <= colEnd; j++) {
                if (grid[i][j] != val) {
                    isLeaf = false;
                    break;
                }
            }
            if (!isLeaf) break;
        }
        // Create the leaf node
        if (isLeaf) {
            return new Node(val == 1, true, nullptr, nullptr, nullptr, nullptr);
        }
        // Create the non-leaf node
        int rowMid = (rowStart + rowEnd) / 2;
        int colMid = (colStart + colEnd) / 2;
        Node* topLeft = buildTree(grid, rowStart, rowMid, colStart, colMid);
        Node* topRight = buildTree(grid, rowStart, rowMid, colMid+1, colEnd);
        Node* bottomLeft = buildTree(grid, rowMid+1, rowEnd, colStart, colMid);
        Node* bottomRight = buildTree(grid, rowMid+1, rowEnd, colMid+1, colEnd);
        return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
    }
};
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return buildTree(grid, 0, n-1, 0, n-1);
    }
    
    Node* buildTree(vector<vector<int>>& grid, int rowStart, int rowEnd, int colStart, int colEnd) {
        // Check if the current grid is a leaf node
        bool isLeaf = true;
        int val = grid[rowStart][colStart];
        for (int i = rowStart; i <= rowEnd; i++) {
            for (int j = colStart; j <= colEnd; j++) {
                if (grid[i][j] != val) {
                    isLeaf = false;
                    break;
                }
            }
            if (!isLeaf) break;
        }
        // Create the leaf node
        if (isLeaf) {
            return new Node(val == 1, true, nullptr, nullptr, nullptr, nullptr);
        }
        // Create the non-leaf node
        int rowMid = (rowStart + rowEnd) / 2;
        int colMid = (colStart + colEnd) / 2;
        Node* topLeft = buildTree(grid, rowStart, rowMid, colStart, colMid);
        Node* topRight = buildTree(grid, rowStart, rowMid, colMid+1, colEnd);
        Node* bottomLeft = buildTree(grid, rowMid+1, rowEnd, colStart, colMid);
        Node* bottomRight = buildTree(grid, rowMid+1, rowEnd, colMid+1, colEnd);
        return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
    }
};
// Thanks 
