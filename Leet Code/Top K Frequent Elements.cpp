class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
// Step 1: Create a frequency map to count occurrences of each element
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

// Step 2: Use a priority queue (min-heap) to store the k most frequent elements
        // Priority queue is ordered by frequency in ascending order
        // The pair contains frequency and element value
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

// Step 3: Iterate through the frequency map and add elements to the priority queue
        for (auto& entry : frequencyMap) {
            pq.push({entry.second, entry.first});

            // If the size exceeds k, remove the element with the lowest frequency
            if (pq.size() > k) {
                pq.pop();
            }
        }

// Step 5: Extract the elements from the priority queue into the result vector
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        // Step 6: Return the result vector
        return result;
    }
};
