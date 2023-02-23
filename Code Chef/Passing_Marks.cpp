#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f=n-x;
    sort(a,a+n);
    int ans=a[f]-1;
    // for(int i=0;i<n;i++){
        
    // }
    cout<<ans<<endl;
    
}
	// your code goes here
	return 0;
}