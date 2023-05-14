class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n = nums.size();
        long long arr1[n + 1], arr2[n + 1];
        long long sol, pow = 1;

        int i = 0;
        while (i < k) {
            pow *= 2;
            i++;
        }

        arr1[0] = 0;
        for (int i = 0; i < n; i++) {
            arr1[i + 1] = arr1[i] | nums[i];
        }
        arr2[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            arr2[i] = arr2[i + 1] | nums[i];
        }
        sol = 0;
        i = 0;
        while (i < n) {
            sol = max(sol, arr1[i] | (nums[i] * pow) | arr2[i + 1]);
            i++;
        }
        return sol;
    }
};
