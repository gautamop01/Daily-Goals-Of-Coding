#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int maxA= max(a,b);
        int  maxF=max(maxA,c);
        int minA=min(a,b);
        int minF=min(minA,c);
        int F = maxF+minF;
        int ans=sum-F;
        cout<<ans<<endl;
       
    }


    return 0;
}