#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool is_possible = true;
        int i = n - 1;
        while (i > 0) {
            if (arr[i] < arr[i - 1]) {
                if (i - 1 == 0)
                    is_possible = false;
                else
                    arr[i - 2] -= (arr[i - 1] - arr[i]);
            } else {
                if (i - 2 >= 0)
                    arr[i - 2] += (arr[i] - arr[i - 1]);
            }
            i -= 2;
        }

        if (is_possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
