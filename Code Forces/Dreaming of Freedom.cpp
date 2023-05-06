#include <bits/stdc++.h>
using namespace std;

 
void factorize(int num, int max_factor) 
{ 
    if(num%2==0){
        if(max_factor>=2){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        return;
    }
    
    int i = 3;
    while(i <= sqrt(num)){
        if(num%i==0){
            if(max_factor>=i){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
            return;
        }
        i = i+2;
    }
    
    cout<<"yes"<<endl;
    return;
} 
 
void solve(){
    int n,m;
    cin>>n>>m;
 
    if(m>=n&&n!=1){
        cout<<"no"<<endl;
        return;
    }
    
    factorize(n,m);
    return;
}
 
signed main() 
{
    int testop;
    cin>>testop;
    
    while(testop--){
        solve();
    }
    return 0;
}
