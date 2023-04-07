// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         int i=0,j=0, k=0;
//          vector<int> merged(m + n);

//         while(i<m && j<n){
//             if(nums1[i]<=nums2[j]){
//                 merged[k]=nums1[i];
//                 i++;
//                 k++;
//             }
//             else{
//                 merged[k]=nums2[j];
//                 j++;k++;
//             }
            
//         }
//         while(i<m){
//                 merged[k]=nums1[i];
//                 k++;i++;
//             }
//             while(j<n){
//                 merged[k]=nums2[j];
//                 k++;j++;
//             }
//         nums1 = merged;
//         sort(nums1.begin(), nums1.end());
//     }
// };


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
