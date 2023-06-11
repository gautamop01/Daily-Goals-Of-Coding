class Solution {
public:
//    bool check(int n, int i, int maxSum, int m) {
//     for (int d = 1; maxSum >= 0 && d < m && i + d < n; ++d)
//         maxSum -= m - d;
//     for (int d = 1; maxSum >= 0 && d < m && i - d >= 0; ++d)
//         maxSum -= m - d;
//     return maxSum >= 0;
// }
// int maxValue(int n, int index, int maxSum) {
//     int l = 0, r = maxSum;
//     while (l < r) {
//         int m = (l + r + 1) / 2;
//         if (check(n, index, maxSum - n - m, m))
//             l = m;
//         else
//             r = m - 1;
//     }
//     return l + 1;
// }
        int maxValue(int n, int index, int maxSum) {
        maxSum -= n;
        int left = 0, right = maxSum, mid;
        while (left < right) {
            mid = (left + right + 1) / 2;
            if (test(n, index, mid) <= maxSum)
                left = mid;
            else
                right = mid - 1;
        }
        return left + 1;
    }

    long test(int n, int index, int a) {
        int b = max(a - index, 0);
        long res = long(a + b) * (a - b + 1) / 2;
        b = max(a - ((n - 1) - index), 0);
        res += long(a + b) * (a - b + 1) / 2;
        return res - a;
    }
};
