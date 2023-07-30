#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m; cin >> m;
    int ans;
    sort(arr.begin(), arr.end());
    ans = arr[m-1] - arr[0];
    for(int i = 1; i < n - m + 1; i++){
        if(ans >= arr[i + m - 1] - arr[i]){
            ans = arr[i + m - 1] - arr[i];
        }
    }
    cout << ans << endl;

    return 0;
}
