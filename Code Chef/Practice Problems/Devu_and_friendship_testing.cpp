// #include <iostream>
// using namespace std;

// int main() { int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     // int a[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>a[i];
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout<<a[n-1]<<endl;
//     // }
//     int i,d;
//     cin>>i>>d;
//     cout<<d<<endl;
// }
// 	// your code goes here
// 	return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int testOp;
	cin>>testOp;
	while(testOp--){
	    
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=a[i+1]) count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
