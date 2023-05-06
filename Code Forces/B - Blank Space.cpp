#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int testop; 
    cin >> testop;
    while(testop--){
        int n, temp = 0, ans = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int i = 0;
        while(i < n){
            if(arr[i] == 0){
                temp++;
                i++;
            } else {
                ans = max(ans, temp);
                temp = 0;
                i++;
            }
        }
        ans = max(ans, temp);
        cout << ans << endl;
    }
    return 0;
}
