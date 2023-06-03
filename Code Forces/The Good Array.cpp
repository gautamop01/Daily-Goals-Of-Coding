#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k != 1 && k>1){
            cout<<(n+k-1)/k+1<<endl;
        }
        else{
            cout<<(n+k-1)/k<<endl;
        }
    }
    return 0;
}
