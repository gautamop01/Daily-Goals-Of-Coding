#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n), suffix(n), result(n);

    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
//         cout << "Prefix :" << prefix[i] << endl;
    }
    

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
//         cout << "suffix :" << suffix[i] << endl;
    }

    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}

int main() {
    vector<int> nums{1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for (int num : result) {
        cout << num << " ";
    }
}

// --------------------------------------------> Wrong in Zero Cases < --------------------------------------------------------------
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);
//         float prod = 1;
//         float prod2 = 1;
//         int sum=0;
//         for (int i = 0; i < n; i++) {
//             sum = sum + nums[i];
//         }
//         for (int i = 0; i < n; i++) {
//             prod = prod * nums[i];
//         }

//         for (int i = 0; i < n; i++) {
//             if(nums[i]==0){
//                 prod2 = prod2;
//             }
//             else{
//             prod2 = prod2 * nums[i];
//             }
//         }
    
//         for (int i = 0; i < n; i++) {
//             if(sum==0 && nums[0]==0 && nums[1]==0){
//                 ans[i]==0;
//             }
//             else{
//             if(nums[i]==0){
//                 ans[i]=prod2;
//             }
//             else{
//             ans[i] = prod / nums[i];
//             }
//             }
//         }
        
        
//         return ans;
//     }
// };
