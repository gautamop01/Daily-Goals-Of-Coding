class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int n = numOnes + numZeros + numNegOnes;
        vector<int> ans(n);
        for(int i = 0; i < numOnes; i++) {
            ans[i] = 1;
        }
        for(int i = numOnes; i < numOnes + numZeros; i++) {
            ans[i] = 0;
        }
        for(int i = numOnes + numZeros; i < n; i++) {
            ans[i] = -1;
        }
        // ans now contains numOnes ones, numZeros zeros, and numNegOnes negative ones

        int answer = 0;
        for(int i = 0; i < k; i++) {
            answer += ans[i];
        }
        return answer;
    }
};
