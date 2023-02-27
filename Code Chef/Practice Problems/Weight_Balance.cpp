#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;
    int x=w2-w1;
    int y=x1*m;
    int z=x2*m;
    // int u=z-y;
    if(x==y || x==z ){
        cout<<"1"<<endl;
    }
   else if(x>y && x<z){
            cout<<"1"<<endl;
        }
    else{
        cout<<"0"<<endl;
    }
}
	// your code goes here
	return 0;
}
