#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int t,ans;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         sort(a,a+n);
//         for(int i=0;i<n;i++){
//           if(a[i]!=a[i+1]){
//               cout<<a[i+1];
//               break;
//             //   int i=i+1;
              
//             }
//         }
//     }
// 	// your code goes here
// 	return 0;
// }
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int count = 1;
	    for(int i=0;i<n-1;i++){
	        if(a[i] == a[i+1]){
	            count++;
	        }else{
	            if(count%2 == 0){
	                count = 1;
	            }else{
	                cout<<a[i]<<endl;
	                count = 0;
	                break;
	            }
	        }
	    }
	    if(count){
	        cout<<a[n-1]<<endl;
	    }
	}
	return 0;
}
