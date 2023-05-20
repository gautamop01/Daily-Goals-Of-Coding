// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         // int m = nums[0].size();

//         int l=0;
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if (nums[i] + nums[j] + nums[k] == 0) {
//                         ans.push_back({nums[i], nums[j], nums[k]});
//                     }
//                 }
//             }
//         }
//         return ans;
        
//     }
// };

// ---------------------------------------------------------------------

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(), nums.end()); // Sort the array in ascending order
        
//         for (int i = 0; i < n - 2; i++) {
//             if (i > 0 && nums[i] == nums[i - 1]) {
//                 continue; // Skip duplicate elements
//             }
            
//             for (int j = i + 1; j < n - 1; j++) {
//                 if (j > i + 1 && nums[j] == nums[j - 1]) {
//                     continue; // Skip duplicate elements
//                 }
                
//                 for (int k = j + 1; k < n; k++) {
//                     if (k > j + 1 && nums[k] == nums[k - 1]) {
//                         continue; // Skip duplicate elements
//                     }
                    
//                     if (nums[i] + nums[j] + nums[k] == 0) {
//                         ans.push_back({nums[i], nums[j], nums[k]});
//                     }
//                 }
//             }
//         }
        
//         return ans;
//     }
// };


// --------------------------------------------------------------------

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // Sort the array in ascending order
        vector<vector<int>> ans;
        
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; // Skip duplicate elements
            }
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++; // Skip duplicate elements
                    }
                    
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--; // Skip duplicate elements
                    }
                    
                    left++;
                    right--;
                }
            }
        }
        
        return ans;
    }
};
