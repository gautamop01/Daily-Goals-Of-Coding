#include <bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

         vector<int> arr1(n) ;
        for(int i=0;i<n;i++){
            arr1[i]=nums[i]*nums[i];
        }
        sort(arr1.begin(), arr1.end());  
        return arr1;
        
    }
};
