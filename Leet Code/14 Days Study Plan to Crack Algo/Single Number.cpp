// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int ans=0;
//         int n=nums.size();
//         for(int i=0;i<n-1;i++){
//             if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
//                 ans=nums[i];
//                 break;
//             }
//         }
//         if(ans==0){
//             ans=nums[0];
//         }
        
// //         return ans ;
// //     }
// // };
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int ans = 0;
//         int n = nums.size();
//         for (int i = 1; i < n-1; i++) {
//             if (nums[i] != nums[i-1] && nums[i] != nums[i+1]) {
//                 ans = nums[i];
//                 break;
//             }
//         }
//         if (ans == 0) {
//             ans = nums[0];
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++) {
            ans = ans^nums[i];
        }
        
        return ans;
    }
};
