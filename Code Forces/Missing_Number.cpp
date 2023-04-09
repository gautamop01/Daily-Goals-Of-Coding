// // class Solution {
// // public:
// //     int missingNumber(vector<int>& nums) {
// //         sort(nums.begin(),nums.end());
// //         int  ans = 0;
// //         for(int i=0;i<nums.size()-1;i++){
// //             if(nums[i]!=nums[i+1]+1){
// //                 ans+=i;
// //             }
// //             else{
// //                 ans+=0;
// //             }
// //         }
// // // check if the last element is missing
// //         if (nums[nums.size()-1] != nums.size()) {
// //             ans += nums.size();
// //         }
// //         return ans ;
        
// //     }
// // };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n*(n+1)/2; // sum of numbers from 0 to n
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    return expectedSum - actualSum;
}
    
};
