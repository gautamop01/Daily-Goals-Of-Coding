/*
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL) return 0;
        else{
            int lD = height(node->left);
            int rD = height(node->right);
            if(lD > rD) return lD+1;
            else return rD + 1;
        }
    }
};
*/

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        int depth = 0;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            if(temp == NULL){
                depth++;
            }
            if(temp !=NULL){
                if(temp -> left){
                    q.push(temp->left);
                }
                if(temp -> right){
                    q.push(temp->right);
                }
            }
            else if(!q.empty()){
                q.push(NULL);
            }
        }
        return depth;
    }
};
