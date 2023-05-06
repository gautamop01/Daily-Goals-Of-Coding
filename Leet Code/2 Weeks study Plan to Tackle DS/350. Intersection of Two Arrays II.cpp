// #include <bits/stdc++.h>
// using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};


// int main(){
//     vector<int> nums1 = {4,9,5}; // 4 5 9
//     vector<int> nums2 = {9,4,9,8,4}; // 4 4 8 9 9 
//     Solution s;
//     vector<int> ans = s.intersect(nums1,nums2);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//         }
//         return 0;
        
    
// }
