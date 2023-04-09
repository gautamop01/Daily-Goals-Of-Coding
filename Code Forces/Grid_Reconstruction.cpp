// Codeforces Round 865 (Div. 2)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 10000000007;
const ll SIZE = 1000002;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll i, j, k, n, m;
        cin >> n;

        vector<vector<ll>> res(2,vector<ll>(n));
        ll max_val = 2*n;
        res[0][0] = max_val;
        res[1][n-1] = max_val-1;
        ll front_val = 1, back_val = max_val-2;
        i = 0, j = 0;

        while(i < n-1){
            if(i % 2 != 0){
                res[1][i] = back_val-1;
                res[0][i+1] = back_val;
                back_val -= 2;
            }
            else{
                res[1][i] = front_val;
                res[0][i+1] = front_val+1;
                front_val += 2;
            }
            i++;
        }

        while(j < 2){
            k = 0;
            while(k < n){
                cout << res[j][k] << " ";
                k++;
            }
            cout << endl;
            j++;
        }
    }
    return 0;
}
