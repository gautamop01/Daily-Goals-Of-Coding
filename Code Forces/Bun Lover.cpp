#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int calculateExpression(int n) {
    return n * n + 2 * n + 2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testop;
    cin >> testop;
    for (int i = 0; i < testop; i++)
    {
        int num;
        cin >> num;
        int result = calculateExpression(num);
        cout << result << endl;
    }
    return 0;
}
