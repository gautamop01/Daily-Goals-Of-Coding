#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> find(int arr[], int n, int x) {
        vector<int> ans;
        vector<int> rev(arr, arr + n);

        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                ans.push_back(i);
                break;
            }
        }

        reverse(rev.begin(), rev.end());

        for (int i = 0; i < n; i++) {
            if (rev[i] == x) {
                ans.push_back(n - 1 - i);
                break;
            }
        }

        return ans;
    }
};
