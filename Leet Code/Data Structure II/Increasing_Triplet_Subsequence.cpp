// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         int n = nums.size();
//         int cnt = 0;
//         for(int i = 0; i < n; i++){
//             for(int j = i + 1; j <= i + 1; j++){
//                 if(nums[i] < nums[j]){
//                     cnt++;
//                 }
//             }
//         }
//         if(cnt >= 3){
//             return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int min1 = INT_MAX; // Initialize the first minimum element to a large value
        int min2 = INT_MAX; // Initialize the second minimum element to a large value

        for (int i = 0; i < n; i++) {
            if (nums[i] <= min1) {
                min1 = nums[i]; // Update the first minimum element
            } else if (nums[i] <= min2) {
                min2 = nums[i]; // Update the second minimum element
            } else {
                return true; // Found an increasing triplet
            }
        }

        return false; // No increasing triplet found
    }
};
