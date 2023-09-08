class Solution
{
    public:
    int kthLargest(Node *root, int K)
    {
        stack<Node*> st;
        Node* current = root;
        while(!st.empty() || current){
            while(current){
                st.push(current);
                current = current -> left;
            }
            
            current = st.top();
            st.pop();
            K--;
            if(K==0){
                return current->data;
            }
            current = current-> right;
        }
        return -1;
    }
};
