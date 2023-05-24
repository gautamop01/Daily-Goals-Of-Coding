class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> sumFreq;  // Map to store cumulative sum frequencies
        int sum = 0;  // Current cumulative sum
        int count = 0;  // Count of subarrays with sum equal to k
        
        sumFreq[0] = 1;  // Initialize with a sum of 0 (empty subarray)
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            
            if (sumFreq.find(sum - k) != sumFreq.end()) {
                count += sumFreq[sum - k];  // Increment count if (sum - k) exists in the map
            }
            
            sumFreq[sum]++;  // Increment the frequency of current cumulative sum
        }
        
        return count;
    }
};




// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> subarray;
//         vector<vector<int>> subarrays;
        
//         for (int i = 0; i < n; i++) {
//             subarray.clear();  // Clear the subarray for each new starting index
//             for (int j = i; j < n; j++) {
//                 subarray.push_back(nums[j]);  // Add elements to the subarray
//                 subarrays.push_back(subarray);  // Store the subarray in the result
//             }
//         }
        
//         int ans = 0;
//         for (int i = 0; i < subarrays.size(); i++) {
//             int sum = 0;
//             for (int j = 0; j < subarrays[i].size(); j++) {
//                 sum += subarrays[i][j];  // Calculate the sum of the subarray
//             }
//             if (sum == k) {
//                 ans++;  // Increment count if the sum matches the target
//             }
//         }
        
//         return ans;
//     }
// };

