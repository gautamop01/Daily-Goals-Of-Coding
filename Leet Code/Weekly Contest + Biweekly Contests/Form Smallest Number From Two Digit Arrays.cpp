class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        int i = 0;
        while(i < nums1.size()){
            m[nums1[i]]++;
            i++;
        }
        i = 0;
        while(i < nums2.size()){
            m[nums2[i]]++;
            i++;
        }
        for(auto i : m){
            if(i.second > 1){
                return i.first;
            }
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int x = nums1[0];
        int y = nums2[0];
        return min(10*x + y, 10*y+x);
    }
};
