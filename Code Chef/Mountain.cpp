#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> solveQuery(int n, int m, int x) {
    int t = 0;
    while(t < n && x > t) {
        x -= t + 1;
        t++;
    }
    vector<int> a;
    while(t >= 1) {
        a.push_back(min(x / t, m - 1));
        x -= a.back() * t;
        t--;
    }
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) {
        a[i]++;
    }
    return a;
}

int32_t main(){
    int n, m, q;
    cin >> n >> m >> q;
    
    while(q--) {
        int x;
        cin >> x;
        vector<int> ans = solveQuery(n, m, x);
        cout << "1 " << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
