#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int mini = INT_MAX;
	    int maxi = INT_MIN;
	    int count = 1;
	    for (int i = 0; i < n-1; i++) {
	        if (abs(arr[i + 1] - arr[i])<= 2)
	            count++;
	        else {
	            mini = min(mini, count);
	            maxi = max(maxi, count);
	            count = 1;
	        }
	    }
	    mini = min(mini, count);
	    maxi = max(maxi, count);
	    cout<<mini<<" "<<maxi<<endl;
	    
	    
	    
	}
	return 0;
