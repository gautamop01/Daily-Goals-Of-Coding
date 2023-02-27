#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        sort(nums.begin(), nums.end()); // Step 1: Sort the array
        
        int i = 0; // Pointer to the current element
        int j = 1; // Pointer to the next distinct element
        
        while (j < nums.size()) { // Step 2: Traverse the sorted array
            if (nums[j] == nums[i]) { // If the current element is a duplicate
                nums.erase(nums.begin() + j); // Remove the current element
            } else { // If the current element is distinct
                i = j; // Move i to j
                j++; // Move j to the next element
            }
        }
        
        return nums.size();
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    Solution sol;
    int length = sol.removeDuplicates(nums);
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl; // Output: 1 2 3
    return 0;
}
