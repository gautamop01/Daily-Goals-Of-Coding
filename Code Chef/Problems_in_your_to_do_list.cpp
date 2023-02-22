// Problems in your to-do list
#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>=1000) cnt++;
        else 0;
    }
    cout<<cnt<<endl;
}
	// your code goes here
	return 0;
}
