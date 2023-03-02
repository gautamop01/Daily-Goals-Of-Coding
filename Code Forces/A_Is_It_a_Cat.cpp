#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll m = 0, e = 0, o = 0, w = 0;
    ll ind = 0;

    if (s[ind] == 'm' or s[ind] == 'M') {
        for (int i = ind; i < n; i++) {
            if (s[i] == 'm' or s[i] == 'M') {
                m = 1;
                ind++;
            } else {
                break;
            }
        }
    } else {
        cout << "NO" << endl;
        return;
    }

    if (s[ind] == 'e' or s[ind] == 'E') {
        for (int i = ind; i < n; i++) {
            if (s[i] == 'e' or s[i] == 'E') {
                e = 1;
                ind++;
            } else {
                break;
            }
        }
    } else {
        cout << "NO" << endl;
        return;
    }

    if (s[ind] == 'o' or s[ind] == 'O') {
        for (int i = ind; i < n; i++) {
            if (s[i] == 'o' or s[i] == 'O') {
                o = 1;
                ind++;
            } else {
                break;
            }
        }
    } else {
        cout << "NO" << endl;
        return;
    }

    if (s[ind] == 'w' or s[ind] == 'W') {
        for (int i = ind; i < n; i++) {
            if (s[i] == 'w' or s[i] == 'W') {
                w = 1;
                ind++;
            } else {
                break;
            }
        }
    } else {
        cout << "NO" << endl;
        return;
    }

    if (m == 1 and e == 1 and o == 1 and w == 1 and ind == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll testop; cin >> testop;
    while(testop--){
        solve();
    }
    return 0;
}
