class Solution {
public:
    long long minCost(vector<int>&A, int n)
    {
        long long cost = 0;

        sort(A.begin(), A.end());

        long long K = A[n / 2];

        int i = 0;
        while (i < n) {
            cost += abs(A[i] - K);
            i++;
        }

        if (n % 2 == 0) {
            long long tempCost = 0;

            K = A[(n / 2) - 1];

            i = 0;
            while (i < n) {
                tempCost += abs(A[i] - K);
                i++;
            }

            cost = min(cost, tempCost);
        }

        return cost;
    }

    long long makeSubKSumEqual(vector<int>& arr, int k) {
        long long n=arr.size();
        if(__gcd(n,(long long)k)==1){
            return minCost(arr,n);
        }
        else{
            long long ans=0;
            int i = 0;
            while (i < __gcd(n, (long long)k)) {
                vector<int>v1;
                int j = i;
                while (j < arr.size()) {
                    v1.push_back(arr[j]);
                    j += __gcd(n, (long long)k);
                }
                ans += minCost(v1, v1.size());
                i++;
            }
            return ans;
        }
        return 0;
    }
};
