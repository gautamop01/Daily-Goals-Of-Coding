class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>>pairs(n);
        for(int i=0;i<n;i++){
            pairs[i]={heights[i], names[i]};
        }
        sort(pairs.rbegin(),pairs.rend());

        vector<string> res(n);
        for(int i=0;i<n;i++){
            res[i]=pairs[i].second;
        }
        return res;

      

        
    }
};
