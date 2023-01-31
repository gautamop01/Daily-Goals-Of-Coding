#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,i,j,c;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        sort(h,h+n);
        reverse(h,h+n);
         for(i=0; i<n;)
        {
            j=i;
            c=0;
            
            while(h[i]==h[j] && i<n){
                i++;
                c++;
            }
            
            ans=max(ans, h[j]+c-1);
        }
        
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
