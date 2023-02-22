class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
    int lo = *max_element(weights.begin(), weights.end()); // minimum capacity must be at least the weight of the heaviest package
    int hi = accumulate(weights.begin(), weights.end(), 0); // maximum capacity must be at most the sum of all package weights
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2; // try the middle capacity
        int d = 1; // number of days needed to ship all packages with current capacity
        int s = 0; // current weight on the ship
        for (int w : weights) {
            if (s + w > mid) { // cannot add the package to the ship, start a new day
                d++;
                s = w;
            } else {
                s += w;
            }
        }
        if (d > days) { // we need more days, increase capacity
            lo = mid + 1;
        } else { // we can do it with less days, decrease capacity
            hi = mid;
        }
    }
    return lo;
}
};
