class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() < 1) {
            return 0;
        }
        else if(nums.size()>1){
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
           if(nums[i]!=nums[i+1]){
               return nums[i];
           }
           i++;
        }
    }
        return nums[0];
    }
};

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
        
//         int ans = 0;
        
//         for(int i=0; i<nums.size(); i++) {
//             ans = ans^nums[i];
//         }
        
//         return ans;
//     }
// };
