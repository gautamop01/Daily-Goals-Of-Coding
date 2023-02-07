class Solution {
public:
    int maxCount(vector<int>& banned, int n, int MaximumSum) {
        map<int,int>mp;
        for(auto x: banned) mp[x]++;
        int tSUM=0,count=0;
        for(int j=1; j<=n; j++){
            if((mp.find(j)==mp.end()) and ((tSUM+j)<=MaximumSum)){
                count++;
                tSUM+=j;
            }
        }
        return count;
    }
};
