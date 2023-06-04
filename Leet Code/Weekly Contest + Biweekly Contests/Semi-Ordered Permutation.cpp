#include <iostream>
#include <vector>

class Solution {
public:
    int semiOrderedPermutation(std::vector<int>& nums) {
        int f = 0, l = 0;
        int n = nums.size();

        int i = 0;
        while (i < n) {
            if (nums[i] == 1)
                f = i;
            i++;
        }

        int answer = 0;
        while (f != 0) {
            int pointer = nums[f];
            nums[f] = nums[f - 1];
            nums[f - 1] = pointer;
            f--;
            answer++;
        }

        i = 0;
        while (i < n) {
            if (nums[i] == n)
                l = i;
            i++;
        }

        return answer + (n - 1) - l;
    }
};
