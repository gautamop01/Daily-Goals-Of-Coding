#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int findFirstNegativeOrMax(const vector<int>& nums) {
    bool negative_found = false;
    int max_num = nums[0];
 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) {
            return nums[i];
        }
 
        max_num = max(max_num, nums[i]);
    }
 
    return max_num;
}
 
void processTestCase() {
    int n;
    cin >> n;
    vector<int> nums(n);
 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
 
    sort(nums.begin(), nums.end());
 
    int result = findFirstNegativeOrMax(nums);
    cout << result << endl;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        processTestCase();
    }
 
    return 0;
}
