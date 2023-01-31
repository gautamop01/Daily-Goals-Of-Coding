#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    if(a==b){
        cout<<0<<endl;
    }
    else{
        while(b%a != 0){
            a=a/2;
            cnt++;
        }
        while( b!=a){
            a=a*2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
	// your code goes here
	return 0;
}
