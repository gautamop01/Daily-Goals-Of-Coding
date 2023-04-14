// class Solution {
// public:
//     bool checkSubarraySum(vector<int>& nums, int k) {

//         sort(nums.begin(), nums.end());
//                 int sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             sum == k;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum;
        prefix_sum[0] = -1; 
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (k != 0) {
                sum %= k;
            }
            if (prefix_sum.count(sum)) {
                if (i - prefix_sum[sum] > 1) {
                    return true;
                }
            } else {
                prefix_sum[sum] = i;
            }
        }
        return false;
    }
};
