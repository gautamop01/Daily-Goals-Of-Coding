class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        int len = 0;
        int pos;
        vector<int> ans;
        for(int i=0;i<n;i++){
            pos = s.find_last_of(s[i]);
            len = pos-i+1;
            for(int j=i+1;j<pos;j++)
            {
                if(s.find_last_of(s[j])>pos)
                pos = s.find_last_of(s[j]);
                len = pos-i+1;
            }
            i=pos;
            ans.push_back(len);
        }
        return ans;
    }
};
