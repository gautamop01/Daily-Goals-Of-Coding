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

// This solution is using DFS
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root == NULL)
//         return 0;
//         else{
//             int LeftDepth = maxDepth(root->left);
//             int RightDepth = maxDepth(root->right);

//             if(LeftDepth>RightDepth)
                
//                 return (LeftDepth + 1);
//             else{
//               return (RightDepth + 1);
//             }
//         }

        
//     }
// };


// This solution using BFS;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int level_size = q.size();
            
            for (int i = 0; i < level_size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                
                if (temp->left != NULL) {
                    q.push(temp->left);
                }
                
                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
            
            depth++;
        }
        
        return depth;
    }
};


/*
// Time linit exceec 
public:
    int maxDepth(TreeNode* root) {
       
 int depth = 0;
 
    queue<TreeNode*> q;
 
    // Pushing first level element along with NULL
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
 
        // When NULL encountered, increment the value
        if (temp == NULL) {
            depth++;
        }
 
        // If NULL not encountered, keep moving
        if (temp != NULL) {
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
 
        // If queue still have elements left,
        // push NULL again to the queue.
        else if (!q.empty()) {
            q.push(NULL);
        }
    }
    return depth;

        
    }
};
*/
