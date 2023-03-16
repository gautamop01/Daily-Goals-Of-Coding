/*
Construct Binary Tree from Inorder and Postorder Traversal

Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.
  
Example 1:


Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]
Example 2:

Input: inorder = [-1], postorder = [-1]
Output: [-1]
 

Constraints:

1 <= inorder.length <= 3000
postorder.length == inorder.length
-3000 <= inorder[i], postorder[i] <= 3000
inorder and postorder consist of unique values.
Each value of postorder also appears in inorder.
inorder is guaranteed to be the inorder traversal of the tree.
postorder is guaranteed to be the postorder traversal of the tree

*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // If the inorder or postorder traversal is empty, return nullptr.
        if (inorder.empty() || postorder.empty()) {
            return nullptr;
        }
        // Call the recursive helper function to build the tree.
        return buildTreeHelper(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }
    
private:
    TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd) {
        // If the start index is greater than the end index in either inorder or postorder, return nullptr.
        if (inStart > inEnd || postStart > postEnd) {
            return nullptr;
        }
        
        // The root of the tree is the last element in the postorder traversal.
        int rootVal = postorder[postEnd];
        TreeNode* root = new TreeNode(rootVal);
        
        // Find the index of the root in the inorder traversal to determine the left and right subtrees.
        int rootIndex = 0;
        for (int i = inStart; i <= inEnd; i++) {
            if (inorder[i] == rootVal) {
                rootIndex = i;
                break;
            }
        }
        
        // Calculate the size of the left subtree to determine the boundaries of the left and right subtrees in both inorder and postorder traversals.
        int leftSubtreeSize = rootIndex - inStart;
        root->left = buildTreeHelper(inorder, postorder, inStart, rootIndex-1, postStart, postStart+leftSubtreeSize-1);
        root->right = buildTreeHelper(inorder, postorder, rootIndex+1, inEnd, postStart+leftSubtreeSize, postEnd-1);
        
        return root;
    }
};


