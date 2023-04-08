// Codeforces Round 864 (Div. 2)
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++) {
        ll rows, columns, startRow, startColumn, endRow, endColumn;
        cin >> rows >> columns >> startRow >> startColumn >> endRow >> endColumn;

        ll ans;

        if ((startRow == 1 && startColumn == 1) || (endRow == 1 && endColumn == 1) || (startRow == rows && startColumn == columns) || (endRow == rows && endColumn == columns) || (startRow == 1 && startColumn == columns) || (endRow == 1 && endColumn == columns) || (startRow == rows && startColumn == 1) || (endRow == rows && endColumn == 1)) {
            ans = 2;
        } else if (startRow == 1 || startRow == rows || endRow == 1 || endRow == rows || startColumn == 1 || startColumn == columns || endColumn == 1 || endColumn == columns) {
            ans = 3;
        } else {
            ans = 4;
        }

        ll pp = min(rows, columns);

        cout << min(ans, pp) << endl;
    }

    return 0;
}
