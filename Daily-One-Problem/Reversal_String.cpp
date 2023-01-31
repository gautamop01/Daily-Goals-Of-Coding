#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>n>>x;
	    int a[n];
	    
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    
	    bool ans=true;
	    
	    for(int i=0; i<(n-1); i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            if((a[i]+a[i+1])>x)
	            {
	                ans=false;
	                break;
	            }
	            else
	        {
	            swap(a[i],a[i+1]);
	        }
	        }
	    }
	    
	    if(ans)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
