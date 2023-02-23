#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
    int testOp;
    cin >> testOp;

    for (int i = 0; i < testOp; i++) {
        ll num;
        cin >> num;

        if (num == 0) {
            cout << "1 3 4 5\n";
        } else {
            ll p = 8589934592;
            vector<ll> ans = {1, 2, p, p + num};
            for (auto x : ans) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}