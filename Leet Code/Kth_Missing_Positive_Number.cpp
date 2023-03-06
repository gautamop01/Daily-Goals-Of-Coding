/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Return the kth positive integer that is missing from this array.

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int missing = arr[0]-1; // count of missing numbers before the first element
        if(missing >= k) return k; // kth missing number is before the first element
        
        for(int i=1;i<n;i++){
            missing += (arr[i]-arr[i-1]-1); // count of missing numbers between consecutive elements
            if(missing >= k){ // kth missing number is between arr[i-1] and arr[i]
                return arr[i-1] + (k - (missing - (arr[i]-arr[i-1]-1))); // return kth missing number
            }
        }
        // kth missing number is after the last element
        return arr[n-1] + (k - missing);
    }
};
