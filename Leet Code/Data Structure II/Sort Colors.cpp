/*
// BubbleSort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(nums[j]>nums[j+1]){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;                        
                }
            }
        }
        // return nums;
        
    }
};*/

// Selection Sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int indexOfmin,temp;
        for(int i=0;i<n;i++){
        indexOfmin=i;
        for(int j=i+1;j<n;j++){
            if(nums[j] < nums[indexOfmin]){
                indexOfmin=j;
            }
        }
        temp=nums[i];
        nums[i]=nums[indexOfmin];
        nums[indexOfmin]=temp;
        }
        
    }
};
