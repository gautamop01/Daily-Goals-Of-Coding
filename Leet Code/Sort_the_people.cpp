class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>>pairs(n);
        for(int i=0;i<n;i++){
            pairs[i]={heights[i], names[i]};
        }
        sort(pairs.rbegin(),pairs.rend()); // reversed 

        vector<string> res(n);
        for(int i=0;i<n;i++){
            res[i]=pairs[i].second; // .second for reversed pairs like --> pair[i] = (names[i],height[i]), pair[i+1]=(names[i+1],height[i+1])
            // so all strings on every index -> on second...(see each pair)
        }
        return res;

      

        
    }
};
