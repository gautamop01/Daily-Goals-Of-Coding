class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x, sum = 0, rem;
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }
        while (x > sum) {
            rem = x % 10;
            sum = (sum * 10) + rem;
            x /= 10;
        }
        return (x == sum) || (x == sum / 10);
    }
};
