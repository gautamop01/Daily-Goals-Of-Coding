class Solution {
public:
    void findPermutations(vector<int> &nums, int l, int r, vector<vector<int>> &result) {
        if (l == r) {
            result.push_back(nums);
        } else {
            for (int i = l; i <= r; i++) {
                swap(nums[l], nums[i]);
                findPermutations(nums, l+1, r, result);
                swap(nums[l], nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        findPermutations(nums, 0, nums.size()-1, result);
        return result;
    }
};
