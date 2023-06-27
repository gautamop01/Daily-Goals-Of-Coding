class Solution {
public:
    Node* makeUnion(Node* head1, Node* head2) {
        set<int> st;
        while (head1) {
            st.insert(head1->data);
            head1 = head1->next;
        }
        while (head2) {
            st.insert(head2->data);
            head2 = head2->next;
        }
        Node* ans = NULL;
        Node* prev = NULL;
        for (auto x : st) {
            Node* newNode = new Node(x);
            if (!ans) {
                ans = newNode;
                prev = newNode;
            } else {
                prev->next = newNode;
                prev = newNode;
            }
        }
        return ans;
    }
};
