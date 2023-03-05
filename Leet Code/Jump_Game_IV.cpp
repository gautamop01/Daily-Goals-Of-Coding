/*In one step you can jump from index i to index:

i + 1 where: i + 1 < arr.length.
i - 1 where: i - 1 >= 0.
j where: arr[i] == arr[j] and i != j.
Return the minimum number of steps to reach the last index of the array.

Notice that you can not jump outside of the array at any time.

 

Example 1:

Input: arr = [100,-23,-23,404,100,23,23,23,3,404]
Output: 3
Explanation: You need three jumps from index 0 --> 4 --> 3 --> 9. Note that index 9 is the last index of the array.
Example 2:

Input: arr = [7]
Output: 0
Explanation: Start index is the last index. You do not need to jump.
Example 3:

Input: arr = [7,6,9,6,9,6,9,7]
Output: 1
Explanation: You can jump directly from index 0 to index 7 which is last index of the array.
 

Constraints:

1 <= arr.length <= 5 * 104
-108 <= arr[i] <= 108,*/

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) {
            return 0; // if there is only one element, no jump is needed
        }
        unordered_map<int, vector<int>> indices; // map each value to its indices
        for (int i = 0; i < n; i++) {
            indices[arr[i]].push_back(i);
        }
        vector<bool> visited(n); // keep track of visited indices
        visited[0] = true; // mark the starting index as visited
        queue<int> q{{0}}; // start BFS from index 0
        int steps = 0; // keep track of the number of steps taken
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int curr = q.front();
                q.pop();
                if (curr == n - 1) {
                    return steps; // if the last index is reached, return the number of steps
                }
                vector<int>& next = indices[arr[curr]]; // get the indices of the next value to jump to
                next.push_back(curr - 1); // add the left neighbor to the next list
                next.push_back(curr + 1); // add the right neighbor to the next list
                for (int j : next) { // loop through the next list
                    if (j >= 0 && j < n && !visited[j]) { // check if the index is valid and not visited before
                        visited[j] = true; // mark the index as visited
                        q.push(j); // add the index to the queue to be explored in the next step
                    }
                }
                next.clear(); // clear the next list for the next iteration
            }
            steps++; // increment the number of steps taken after exploring all the indices in the current step
        }
        return -1; // if the last index cannot be reached, return -1
    }
};
