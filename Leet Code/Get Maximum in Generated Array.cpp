class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return n;
        if(n==1) return n;

        vector<int>a(n+1);
        a[0]=0;
        a[1]=1;
        int maxn=1;

        for(int i=2;i<=n;i++){
            if(i%2==0){
             a[i]=a[i/2];
            }
            else{
              a[i]= a[i/2]+a[i/2+1];
                
            }
            maxn=max(a[i], maxn);
        }
        return maxn;
        
    }
};
// You can see that nums[0] = 0 and nums[1] = 1 as per the rules.
Then, nums[2] = nums[1] = 1, nums[3] = nums[1] + nums[2] = 2, nums[4] = nums[2] = 1, nums[5] = nums[2] + nums[3] = 3, nums[6] = nums[3] = 2, and nums[7] = nums[3] + nums[4] = 3.
The maximum integer in the array nums is 3, so the function should return 3.
