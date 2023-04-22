class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_product = nums[n-1] * nums[n-2] * nums[n-3];
        if (nums[0] < 0 && nums[1] < 0) {
            max_product = max(max_product, nums[0] * nums[1] * nums[n-1]);
        }
        return max_product; 
    }
};
