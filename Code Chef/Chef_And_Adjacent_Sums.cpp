// Starters 84 Division 2 (Rated)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testop;
    cin >> testop;
    while (testop--) {
        int nums; int r;
        cin >> nums;
        vector<int> arr(nums);
                    for (int i = 0; i < nums; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int p;
        int largest_sum = arr[nums - 1] + arr[nums - 2];
                bool is_sum_valid = true;
          for (int i = 0, j = nums - 1; i < j; i++, j--) {
            int current_sum = arr[i] + arr[j];
            if (current_sum >= largest_sum) {
                is_sum_valid = false;
                break;
            }
        }
        if (is_sum_valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//  Long Variables for batter understanding
