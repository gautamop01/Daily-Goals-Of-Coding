// class Solution {
// public:
//     bool isValid(string s) {
//         int n = s.size();
//         for(int i=0;i<n;i=i+2){
//             for(int j=i+1;j<n;j=j+2){
//                 if((s[i]=='(' && s[j]==')') || (s[i]=='[' && s[j]==']') || (s[i]=='{' && s[j]=='}')){
//                     return true;
//                 }
//             }
//         }
//         return false;
        
//     }
// };

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s) {
            if(c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else if(st.empty() || (c == ')' && st.top() != '(') || (c == ']' && st.top() != '[') || (c == '}' && st.top() != '{')) {
                return false;
            } else {
                st.pop();
            }
        }
        return st.empty();
    }
};
