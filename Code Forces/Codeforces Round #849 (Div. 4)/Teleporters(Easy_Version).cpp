// Gautam Kumar Mahar
// Codeforces
// G1
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i, N) for (int i = 0; i < N; i++)
typedef vector<int> vi;
void solve()
{
    int n, c;
    cin >> n >> c;

    vi arr(n);
    loop(i, n) cin >> arr[i];
    loop(i, n) arr[i] += i + 1;

    sort(arr.begin(), arr.end());
    int i;
    for (i = 0; i<n; i++)
    {
        if (c >= arr[i])
            c -= arr[i];
        else
            break;
    }
cout << i << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
}