// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
//         vector<int> ans(2);
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(numbers[i]+numbers[j]==target){
//                     ans[0]=i+1;
//                     ans[1]=j+1;
//                     break;
//                 }
//             }
//         }
//         return ans;
        
//     }
// };


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
//         vector<int> ans(2);
//         for(int i=0;i<n;i++){
//             int complement = target - numbers[i];
//             int left = i+1, right = n-1;
//             while(left <= right){
//                 int mid = left + (right-left)/2;
//                 if(numbers[mid] == complement){
//                     ans[0] = i+1;
//                     ans[1] = mid+1;
//                     return ans;
//                 }
//                 else if(numbers[mid] < complement){
//                     left = mid+1;
//                 }
//                 else{
//                     right = mid-1;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0;i<numbers.size();i++){
            for (int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                return{i+1,j+1};
            }
            
            }
        }
       
        return {};
    };
     
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
//         vector<int> ans(2);
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(numbers[i]+numbers[j]==target){
//                     ans[0]=i+1;
//                     ans[1]=j+1;
//                     break;
//                 }
//             }
//         }
//         return ans;
        
//     }
// };

