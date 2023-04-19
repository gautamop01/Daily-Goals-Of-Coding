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
 // DFS approach 
class Solution {
public:
    int max;
    void dfs1(TreeNode* root, int sum) {
        if (!root) return;
        sum++;
        if (sum > max) max = sum;
        dfs1(root->left, 0);
        dfs2(root->right, sum);
    }
    void dfs2(TreeNode* root, int sum) {
        if (!root) return;
        sum++;
        if (sum > max) max = sum;
        dfs2(root->right, 0);
        dfs1(root->left, sum);
    }
    int longestZigZag(TreeNode* root) {
        max = -1;
        dfs1(root, -1);
        return max;
    }
};
