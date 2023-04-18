#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int calculate_moves(ll x, ll y) {
    int n = 0;
    if (x == y) {
        return 0;
    }
    if (x == 3 or x == 5 or x == 7) {
        n++;
        x += x;
    }
    if (x == 9) {
        n++;
        x += 3;
    }
    return n + (y - x + 1) / 2;
}

int main() {
    int testop = 1;
    cin >> testop;
    vector<int> moves(testop);
    for (int i = 0; i < testop; i++) {
        ll x, y;
        cin >> x >> y;
        moves[i] = calculate_moves(x, y);
    }
    for (int i = 0; i < testop; i++) {
        cout << moves[i] << endl;
    }
    return 0;
}
