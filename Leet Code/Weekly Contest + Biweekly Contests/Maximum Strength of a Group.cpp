
class Solution
{

public:
    long long maxStrength(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        long long negativeCount = 0;
        int maxNegative = INT_MIN;
        long long positiveCount = 0;
        long long product = 1;
        int zeroCount = 0;

        for (auto num : nums)
        {
            if (num == 0)
            {
                zeroCount++;
                continue;
            }

            if (num < 0)
            {
                negativeCount++;
                maxNegative = max(maxNegative, num);
            }
            else
            {
                positiveCount++;
            }

            product *= abs(num);
        }

        // Handle edge cases
        if (zeroCount == n)
            return 0;

        if (negativeCount + zeroCount == n && negativeCount == 1)
            return 0;

        // Determine the maximum strength
        if (negativeCount % 2 == 0)
        {
            return product;
        }
        else
        {
            return (product / abs(maxNegative));
        }
    }
};
