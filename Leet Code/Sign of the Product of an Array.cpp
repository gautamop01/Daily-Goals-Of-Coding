class Solution {
public:
    int arraySign(vector<int>& nums) {
        // Check if the input vector is empty
        if(nums.empty()) {
            return 1;
        }
        
        // Compute the product of all the elements in the input vector
        double product = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) {
                return 0;
            }
            product *= nums[i];
        }
        
        // Return the sign of the product
        return (product > 0) ? 1 : ((product < 0) ? -1 : 0); 
        // check product value is less then 0 or positive ? and negative ?
    }
};


