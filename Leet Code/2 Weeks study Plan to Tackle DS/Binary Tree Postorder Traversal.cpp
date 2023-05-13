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
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> res;
//         if (root == nullptr) {
//             return res;
//         }
//         stack<TreeNode*> s;
//         TreeNode* node = root;
//         TreeNode* last = nullptr;
//         while (node != nullptr || !s.empty()) {
//             while (node != nullptr) {
//                 s.push(node);
//                 node = node->left;
//             }
//             TreeNode* top = s.top();
//             if (top->right == nullptr || top->right == last) {
//                 res.emplace_back(top->val);
//                 s.pop();
//                 last = top;
//             } else {
//                 node = top->right;
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }
        vector<int> left = postorderTraversal(root->left);
        result.insert(result.end(), left.begin(), left.end());
        vector<int> right = postorderTraversal(root->right);
        result.insert(result.end(), right.begin(), right.end());
        result.push_back(root->val);
        return result;
    }
};

