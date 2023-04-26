#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
 
 int testop;
 cin>>testop;
 
 for(int i=0; i<testop; i++){
  
  int x,y;
  cin>>x>>y;
  
  if(x*x==2*y){
      cout<<"yes"<<endl;
  }
  else{
      cout<<"no"<<endl;
  }
     
 }
 return 0;
}
