class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n = nums1.size(); // Number of elements in the arrays
        long long s = 0; // Running sum of selected elements
        long long ans = 0; // Maximum score
        
        // Priority queue to keep track of the smallest elements
        priority_queue<int, vector<int>, greater<int>> pq;
        
        // Create a vector of pairs to store (nums2, nums1) pairs for each index
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({nums2[i], nums1[i]});
        }
        
        // Sort the vector of pairs based on nums2 values in ascending order
        sort(v.begin(), v.end());
        
        // Iterate from the end of the vector
        for (int i = n - 1; i >= 0; i--) {
            pq.push(v[i].second); // Push nums1 value to the priority queue
            s += v[i].second; // Add nums1 value to the running sum
            
            if (pq.size() > k) {
                s -= pq.top(); // Remove the smallest element from the running sum
                pq.pop(); // Remove the smallest element from the priority queue
            }
            
            if (pq.size() == k) {
                ans = max(ans, v[i].first * s); // Calculate the score and update the maximum score
            }
        }
        
        return ans; // Return the maximum score
    }
};
