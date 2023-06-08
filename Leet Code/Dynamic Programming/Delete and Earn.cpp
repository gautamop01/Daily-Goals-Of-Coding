//DP Solution O(N^2)
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n  = nums.size();
        vector<int> sums(10001,0);
        vector<int> uni(n,0);
        int j =0 ;
        for(int i : nums){
            if(sums[i]==0){
                uni[j] = i;
                j++;
            }
            sums[i]+=1;
        }
        sort(uni.begin(),uni.end());
        int prev1=0;
        int prev2=0;
        int curSum = uni[0]*sums[uni[0]];
        for(int i=1;i<n;i++){
            prev2 = prev1;
            prev1 = curSum;
            if(uni[i]-1==uni[i-1]){
                curSum = max(uni[i]*sums[uni[i]]+prev2,prev1);
            }
            else{
                curSum = max(uni[i]*sums[uni[i]]+prev1,prev2);
            }
        }
        return max(curSum,prev1);
    }
};


//Recursion
// class Solution {
// public:
//      int helper(vector<int>& nums, int i,int n){
//          if(i>=n){
//              return 0;
//          }
//          int curValue = nums[i];
//          int index = i+1;
//          int sum = nums[i];
//          while(nums[index]==curValue && index<n){
//              sum+=nums[index];
//              index++;
//          }
//          while(nums[index]==curValue+1 && index<n){
//              index++;
//          }
//          return max(sum+helper(nums,index,n),helper(nums,i+1,n));

//      }
//      int deleteAndEarn(vector<int>& nums) {
//          int n  = nums.size();
//          return helper(nums,0,n);
//      }
//  };
