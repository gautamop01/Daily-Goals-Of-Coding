
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0; // index for popped array
        for (int i = 0; i < pushed.size(); i++) {
            st.push(pushed[i]); // push the element to the stack
            while (!st.empty() && st.top() == popped[j]) {
                // keep popping the elements from the stack until
                // we find an element that doesn't match the next
                // element to be popped from the popped array
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};
