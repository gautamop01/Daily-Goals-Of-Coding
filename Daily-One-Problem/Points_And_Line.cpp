// Here i use set which is part of "Set in C++ Standard Template Library (STL)"
#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    set<int>str1;
	    set<int>str2;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x>>y;
	        str1.insert(x);
	        str2.insert(y);
	    }
	    cout<<str1.size()+str2.size()<<endl;
	}
	return 0;
}
