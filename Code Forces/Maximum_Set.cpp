#include <bits/stdc++.h>
using namespace std;
int mod = 998244353;
int f1(int m, int s) {
    return ((m << (s - 2)) * 3)%mod;
}

int f2(int m, int s) {
    return (m << (s - 1))%mod;
}

vector<int> f(int l, int r, int s, function<int(int, int)> g) {
    int a = l - 1, t = r, q = l;
    while (l <= r) {
        int m = (l + r) / 2;
        if (g(m, s) <= t) {
            l = m + 1;
            a = m;
        } else {
            r = m - 1;
        }
    }
    return {q, a};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int u = y, s = 0;
        while (u >= x) {
            s++;
            u /= 2;
        }
        if (s == 1) {
            cout << 1 << " " << y - x + 1 << endl;
        } else {
            auto t1 = f(x, y, s, f1);
            auto t2 = f(t1[1] + 1, y, s, f2);
            cout << s << " " << (t1[1]%mod - t1[0]%mod + 1)%mod * s + t2[1]%mod - t2[0]%mod + 1 << endl;
        }
    }
    return 0;
}
