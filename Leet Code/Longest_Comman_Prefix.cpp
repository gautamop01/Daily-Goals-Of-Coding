// This is Best approach to solve this problem
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans="";
        // Using Sort Fuction for sorting  the string
        sort(str.begin(),str.end());
        string a=str[0]; // initialize first element of str to string a
        string b=str[str.size()-1];
        // Same as initialize
        for(int i=0;i<str[0].size();i++){
            if(a[i]==b[i])
            ans+=a[i];
            else break;
        }
        return ans;
    }
};
