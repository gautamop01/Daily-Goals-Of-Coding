#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int const_t = 1;
        for(int i=0;i<n;i++){
            if(a[i] == const_t) const_t++;
        }

        cout << (n-const_t + k) / k << endl;
    
        
    }

    return 0;
}
