#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

// function to determine the winner
string determineWinner(ll x, ll y) {
    if (x == y) {
        if (x % 2 == 0) {
            return "CHEFINA";
        } else {
            return "CHEF";
        }
    } else if (x > y) {
        if (x - y >= 2) {
            return "CHEF";
        } else {
            if (x % 2) {
                return "CHEFINA";
            } else {
                return "CHEF";
            }
        }
    } else {
        if (y - x >= 2) {
            return "CHEFINA";
        } else {
            if (y % 2 == 0) {
                return "CHEF";
            } else {
                return "CHEFINA";
            }
        }
    }
}

int main() {
    int testop;
    cin >> testop;

    vector<pair<ll, ll>> inputs(testop);  // vector to store inputs

    for (int i = 0; i < testop; i++) {
        ll x, y;
        cin >> x >> y;
        inputs[i] = {x, y};
    }

    // process each input and determine the winner
    for (auto [x, y] : inputs) {
        cout << determineWinner(x, y) << endl;
    }

    return 0;
}
