class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort the intervals based on the start value in ascending order
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        vector<vector<int>> mergedIntervals;
        // Iterate over the sorted intervals
        for (const vector<int>& interval : intervals) {
            // If the mergedIntervals is empty or the current interval doesn't overlap with the previous one
            // Add the current interval directly to the mergedIntervals
            if (mergedIntervals.empty() || interval[0] > mergedIntervals.back()[1]) {
                mergedIntervals.push_back(interval);
            }
            // If the current interval overlaps with the previous one, merge them
            else {
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], interval[1]);
            }
        }
        
        return mergedIntervals;
    }
};
