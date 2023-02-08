#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x;
        cin>>a>>b>>c>>x;
        int d=a+b;
        int e=b+c;
        int f=a+c;
        if(d>=x || e>=x || f>=x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
