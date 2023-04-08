// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         if(root==NULL){
//             return ans;
//         }
//         inorder(root, ans);
//         return ans;
//     }

// private: 
//     void inorder(TreeNode* node, vector<int> & ans){
//         if(node == NULL){
//             return;
//         }
//         inorder(node->left, ans);
//         ans.push_back(node->val);
//         inorder(node->right, ans);
//     }
// };



// Opemized code
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr) {
            return res;
        }
        stack<TreeNode*> s;
        TreeNode* node = root;
        while (node != nullptr || !s.empty()) {
            while (node != nullptr) {
                s.push(node);
                node = node->left;
            }
            node = s.top();
            s.pop();
            res.emplace_back(node->val);
            node = node->right;
        }
        return res;
    }
};
