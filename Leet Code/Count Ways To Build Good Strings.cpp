// class Solution {
// public:
//     int countGoodStrings(int low, int high, int zero, int one) {
//     vector<int> arr(high+1,0);
//     arr[0] = 1;
//     int mod = 1e9+7;
//     int sum = 0;
    
//     for(int i=0;i<=high;i++){
//          if(i>=zero){
//              arr[i] = (arr[i]*1LL+arr[i-zero])%mod;
//          }
//          if(i>=one){
//              arr[i] = (arr[i]*1LL+arr[i-one])%mod;
//          }
//          if(i>=low && i<=high){
//              sum = (sum*1LL+arr[i])%mod;
//          }
//     }
//     return sum;
//     }
// };


vector<int> dp{};
constexpr int MOD {1000000007};
class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        dp.assign(high+1,0);
        dp[0] = 1;
        int ans {};
        for(int i = 0; i < dp.size(); ++i) {
            if(i+zero <= high ) dp[i+zero] = (dp[i+zero]+dp[i]) % MOD;
            if(i+one <= high) dp[i+one] = (dp[i+one]+dp[i]) % MOD;
            if(i >= low && i <= high) ans = (ans + dp[i]) % MOD;
        }
        return ans;
    }
};











