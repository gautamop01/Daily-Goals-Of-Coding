// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int size = n / 2;
//         int cnt = 0;
//         int minCnt = 0;
//         int candidate = 0;
        
//         sort(nums.begin(), nums.end());
        
//         for (int i = 0; i < n; i++) {
//             cnt = count(nums.begin(), nums.end(), nums[i]);
            
//             if (cnt > minCnt) {
//                 minCnt = cnt;
//                 candidate = nums[i];
//             }
            
//             else if (minCnt > size)
//                 break;
//         }
        
//         return candidate;
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority = nums[0];  // Initialize majority element
        int count = 1;  // Initialize count of majority element

        for (int i = 1; i < n; i++) {
            if (nums[i] == majority) {
                count++;
            } else {
                count--;
                if (count == 0) {
                    majority = nums[i];
                    count = 1;
                }
            }
        }
        
        return majority;
    }
};
