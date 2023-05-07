class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& o) {
        vector<int>ans;  
        vector<int>dp;  
        dp.push_back(o[0]);   
        ans.push_back(1);
        for(int i = 1;i<o.size();i++){
            if(o[i]>=dp.back()){      
                dp.push_back(o[i]);
                ans.push_back(dp.size());
            }
            else{
                int ind = upper_bound(dp.begin(),dp.end(),o[i])- dp.begin();
                ans.push_back(ind+1);
                dp[ind] = o[i];
            }
        }
        return ans;
    }
};
