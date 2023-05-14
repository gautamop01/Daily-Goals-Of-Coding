class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxScore = 0, maxDivisor = INT_MAX;
        for (int divisor : divisors) {
            int score = 0;
            for (int num : nums) {
                if (num % divisor == 0) {
                    score++;
                }
            }
            if (score > maxScore) {
                maxScore = score;
                maxDivisor = divisor;
            } else if (score == maxScore) {
                maxDivisor = min(maxDivisor, divisor);
            }
        }
        return maxDivisor;
    }
};
