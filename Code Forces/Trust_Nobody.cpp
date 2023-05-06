#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() 
{
    int testop;
    cin >> testop;
 
    while (testop--) {
        int n;
        cin >> n;
 
        int a[n];
        for (auto &x : a) cin >> x;
 
        sort(a, a+n);
 
        int l = 0;
        while (l <= n) {
            int x = 0, y = 0;
            int i = 0;
            while (i < n) {
                if (a[i] > l) x++;
                else y++;
                i++;
            }
 
            if (x == l) {
                cout << l << endl;
                break;
            }
            
            l++;
        }
 
        if (l > n) cout << -1 << endl;
    }
 
    return 0;
}
