class Solution {
public:
    static bool compare(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];  // Sort intervals based on the end time
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n == 0)
            return 0;

        // Sort intervals based on the end time
        sort(intervals.begin(), intervals.end(), compare);

        int ans = 1;  // Count of non-overlapping intervals
        int prevEnd = intervals[0][1];  // End time of the previous interval

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] >= prevEnd) {
                // Non-overlapping interval found
                ans++;
                prevEnd = intervals[i][1];
            }
        }

        // Number of intervals to be removed = Total intervals - Non-overlapping intervals
        int removeCount = n - ans;
        return removeCount;
    }
};
