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
//     vector<int> preorderTraversal(TreeNode* root) {
//         TreeNode* current = root;
//         TreeNode* next_next;
//         TreeNode* prev;
//         if(current == NULL)
//         return NULL;

//         while(current->next != NULL){
//             if(current->val == NULL){
//                 next_next = currenta->next->next;
//                 delete(current->next);
//                 current->next = next_next;
//             }
//             else{
//                 current = current->next;
//             }
//         }
//         return root;

//     }
// };


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }
        result.push_back(root->val);
        vector<int> left = preorderTraversal(root->left);
        result.insert(result.end(), left.begin(), left.end());
        vector<int> right = preorderTraversal(root->right);
        result.insert(result.end(), right.begin(), right.end());
        return result;
    }
};
