class Solution {
public: 
    int arrangeCoins(int n) {
        // Set up left and right bounds for binary search
        long long left = 0, right = n;
        
        // Binary search algorithm to find answer
        while (left <= right) {
            long long mid = left + (right - left) / 2;  // Calculate middle value
            long long curr = (mid * (mid + 1)) / 2;     // Calculate total number of coins for mid rows
            
            if (curr == n) {            // If curr is equal to n, mid is the answer
                return mid;
            } else if (curr < n) {      // If curr is less than n, move left bound to mid + 1
                left = mid + 1;
            } else {                    // If curr is greater than n, move right bound to mid - 1
                right = mid - 1;
            }
        }
        
        // Return right bound, which is the correct answer when binary search terminates
        return right;
    }
};
