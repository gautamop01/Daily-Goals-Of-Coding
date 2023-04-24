#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int findMaxProduct(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return max(arr[0] * arr[1], arr[arr.size()-2] * arr[arr.size()-1]);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &x : nums)
            cin >> x;

        int maxProduct = findMaxProduct(nums);
        cout << maxProduct << endl;
    }
    return 0;
}
