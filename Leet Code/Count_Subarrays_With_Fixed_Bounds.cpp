/*You are given an integer array nums and two integers minK and maxK.

A fixed-bound subarray of nums is a subarray that satisfies the following conditions:

The minimum value in the subarray is equal to minK.
The maximum value in the subarray is equal to maxK.
Return the number of fixed-bound subarrays.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [1,3,5,2,7,5], minK = 1, maxK = 5
Output: 2
Explanation: The fixed-bound subarrays are [1,3,5] and [1,3,5,2].
Example 2:

Input: nums = [1,1,1,1], minK = 1, maxK = 1
Output: 10
Explanation: Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.
 

Constraints:

2 <= nums.length <= 105
1 <= nums[i], minK, maxK <= 106*/
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        // initialize some variables
        int n = nums.size();
        int leftBound = -1;
        int lastMin = -1, lastMax = -1;
        long long count = 0;
        
        for (int i = 0; i < n; i++) {
            // check if nums[i] is within the range [minK, maxK]
            if (nums[i] >= minK && nums[i] <= maxK) {
                // if nums[i] is equal to minK, update lastMin to the current index i
                lastMin = (nums[i] == minK) ? i : lastMin;
                // if nums[i] is equal to maxK, update lastMax to the current index i
                lastMax = (nums[i] == maxK) ? i : lastMax;
                // update the count by the number of valid subarrays between leftBound and the 
                // smaller of lastMin and lastMax
                count += max(0, min(lastMin, lastMax) - leftBound);
            } else {
                // if nums[i] is not within the range [minK, maxK], update leftBound to i
                leftBound = i;
                // reset lastMin and lastMax to -1
                lastMin = -1;
                lastMax = -1;
            }
        }
        
        // return the final count of valid subarrays
        return count;
    }
};
// This is hard problem , I use help from others solution 
