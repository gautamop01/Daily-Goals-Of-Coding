// Weekly Contest 340

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool is_prime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int max_prime = 0;
        for (int i = 0; i < n; i++) {
            if (is_prime(nums[i][i])) {
                max_prime = max(max_prime, nums[i][i]);
            }
            if (is_prime(nums[i][n - i - 1])) {
                max_prime = max(max_prime, nums[i][n - i - 1]);
            }
        }
        return max_prime;
    }
};
