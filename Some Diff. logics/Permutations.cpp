class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>results; // creat another vector in store permuted nums
        sort(nums.begin(), nums.end()); // sort the nums 
        results.emplace_back(nums);

        while(next_permutation(nums.begin(), nums.end())){
            results.emplace_back(nums); // Assign the permuted nums in results vector
        }
        return results;
    }
};
