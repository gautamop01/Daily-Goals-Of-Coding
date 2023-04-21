class Solution {
public:
    bool isHappy(int n) {
        int sum = 0; // Initialize the sum to 0
        while (n > 0) { // While the number is greater than 0
            int digit = n % 10; // Get the rightmost digit
            sum += digit * digit; // Add the square of the digit to the sum
            n /= 10; // Remove the rightmost digit from the number
        }
        if (sum == 1) { // If the sum is 1, the number is happy
            return true;
        } else if (sum == 4) { // If the sum is 4, the number will eventually lead to 4, so it is not happy
            return false;
        } else { // Otherwise, recursively call isHappy() with the new sum
            return isHappy(sum);
        }
    }
};
