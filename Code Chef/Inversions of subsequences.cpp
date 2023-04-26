#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

const int MOD = 998244353;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testop;
    cin >> testop;
    while (testop--)
    {
        int n;
        cin >> n;
        vector<int> a(n), l(n), r(n), b(n, 1);

        int i = 0;
        while (i < n) {
            cin >> a[i];
            i++;
        }

        i = 1;
        l[0] = a[0];
        while (i < n) {
            l[i] = max(l[i - 1], a[i]);
            i++;
        }

        i = n - 2;
        r[n - 1] = a[n - 1];
        while (i >= 0) {
            r[i] = min(r[i + 1], a[i]);
            i--;
        }

        i = 0;
        while (i < n) {
            if (i < n - 1 && a[i] > r[i + 1])
                b[i] = 0;
            if (i > 0 && a[i] < l[i - 1])
                b[i] = 0;
            i++;
        }

        int k = 0;
        i = 0;
        while (i < n) {
            if (b[i] == 1) k++;
            i++;
        }

        int ans = 1;
        i = 0;
        while (i < k) {
            ans = (ans * 2) % MOD;
            i++;
        }
        
        if (k == n)
            ans = (ans - 1 + MOD) % MOD;
        cout << ans << endl;
    }
    return 0;
}
