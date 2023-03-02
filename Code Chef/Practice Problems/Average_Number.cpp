#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        int a[n];
        int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int p=n+k;
      int ori_sum = p*v ;
      int del_sum = ori_sum - sum;
      int del_val = del_sum/k;
      
      if(del_val > 0 && ori_sum == sum + k*del_val){
          cout<<del_val<<endl;
      }else{
          cout<<"-1"<<endl;
      }
    }
	// your code goes here
	return 0;
}
