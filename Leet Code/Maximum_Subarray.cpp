// I use Kadane’s Algorithm in this problem 
// Best TC O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int cursum = 0;
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++){
            cursum = cursum + nums[i];
          
            if(cursum > maxsum){
                maxsum = cursum;
            }
            if(cursum < 0){
                cursum = 0;
            }
           
        }
        
        return maxsum;
        
    }
};
