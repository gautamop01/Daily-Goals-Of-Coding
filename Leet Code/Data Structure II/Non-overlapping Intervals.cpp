class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int m = intervals[0].size();
        int ans=0;int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             if(intervals[j][i]==intervals[k][i]){
                 k++;
                 ans++;
             }
            }
        }
        return ans;

        
    }
};
