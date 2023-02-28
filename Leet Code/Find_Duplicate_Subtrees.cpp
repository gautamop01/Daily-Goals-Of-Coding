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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> res;
        unordered_map<string, int> mp; // map to keep track of subtrees
        
        traverse(root, mp, res); // traverse the tree to find duplicate subtrees
        
        return res;
    }
    
    // Function to traverse the tree and find duplicate subtrees
    string traverse(TreeNode* root, unordered_map<string, int>& mp, vector<TreeNode*>& res) {
        if (!root) return ""; // empty string for null node
        
        string subtree = to_string(root->val) + "," + traverse(root->left, mp, res) + "," + traverse(root->right, mp, res); // form string representation of subtree
        
        if (mp[subtree] == 1) res.push_back(root); // subtree already seen once, add to result
        
        mp[subtree]++; // update count of subtree in map
        
        return subtree; // return string representation of subtree
    }
};
