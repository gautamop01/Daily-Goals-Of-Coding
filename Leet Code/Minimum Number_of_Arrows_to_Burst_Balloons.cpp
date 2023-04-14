class Solution {
public:
       static bool shortout(vector<int>v1, vector<int>v2){
        if(v1[1]<v2[1]) return true;
        if(v1[1]==v2[1] && v1[0]<v2[0]) return true;
        return false;
    }


    int findMinArrowShots(vector<vector<int>>& points) {
        int i=0,j, ans=0;
        int n=points.size();
        sort(points.begin(),points.end(),shortout);
        while(i<n){
            j=i+1;
            while(j<n and points[j][0]<=points[i][1]){
                j++;
            }
            ans++;
            i=j;
        }

        return ans ;


        
    }
};
