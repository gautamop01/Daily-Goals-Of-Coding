lass Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            bool foundDuplicate = false;
            // Check if nums[i] is the same as the previous or next element
            if (i > 0 && nums[i] == nums[i - 1])
                foundDuplicate = true;
            if (i < n - 1 && nums[i] == nums[i + 1])
                foundDuplicate = true;
            
            if (!foundDuplicate) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};




class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if ((i == 0 || nums[i] != nums[i - 1]) && (i == n - 1 || nums[i] != nums[i + 1])) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
