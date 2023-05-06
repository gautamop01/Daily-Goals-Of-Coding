#include <bits/stdc++.h>
using namespace std;
 
const int N = (int) 1e6+5;
const int MOD = (int) 1e9+7;
 
map<long long, bool> visited;
 
void DFS_NEW(long long x){
    if(!x){
        return;
    }
    visited[x] = true;
    if((2*x)%3){
        return;
    }
    long long ans = (2*x)/3;
    DFS_NEW(ans);
    DFS_NEW(ans/2);
}
 
void solve(){
    long long start, target;
    cin >> start >> target;
 
    visited.clear();
    DFS_NEW(start);
 
    cout << (visited[target] ? "YES" : "NO") << endl;
}
 
int main(){
    int testop;
    cin >> testop;
 
    for(int i = 0; i < testop; i++){
        solve();
    }
 
    return 0;
}
