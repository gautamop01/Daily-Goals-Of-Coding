class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        float prod = 1;
        float prod2 = 1;
        int sum=0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }
        for (int i = 0; i < n; i++) {
            prod = prod * nums[i];
        }

        for (int i = 0; i < n; i++) {
            if(nums[i]==0){
                prod2 = prod2;
            }
            else{
            prod2 = prod2 * nums[i];
            }
        }
    
        for (int i = 0; i < n; i++) {
            if(sum==0 && nums[0]==0 && nums[1]==0){
                ans[i]==0;
            }
            else{
            if(nums[i]==0){
                ans[i]=prod2;
            }
            else{
            ans[i] = prod / nums[i];
            }
            }
        }
        
        
        return ans;
    }
};
