// Codeforces Round 863 (Div. 3)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printMinMaxSeries(ll n) {
    ll currTerm, prevTerm;
    int i = 0;
    while (i < n - 1) {
        cin >> currTerm;
        if(i == 0) cout << currTerm << " ";
        else cout << min(currTerm, prevTerm) << " ";
        prevTerm = currTerm;
        i++;
        if(i == n - 1) cout << currTerm << endl;
    }
}

int main() {
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        printMinMaxSeries(n);
    }
    return 0;
}
