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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
             return {};
        }
        vector<vector<int>> levels;
        level(root,0,levels);
        return levels;
    }
private:
    void level(TreeNode* root, int l, vector<vector<int>> &levels){
        if(root == NULL){
            return;
        }
        if(levels.size() <= l){
            levels.push_back({});
        }
        levels[l].push_back(root -> val);
        level(root -> left, l+1, levels);
        level(root -> right, l+1, levels);
    }
};
