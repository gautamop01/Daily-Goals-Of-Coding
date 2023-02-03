// Gautam Kumar Mahar
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       
        ll n;
        cin>>n;
        string s;
        cin>>s;
        
        ll l = 0, r = n- 1;
        ll ans = n, cnt = 0;
        while(l <= r)
        {
            if(s[l] != s[r]){
                l++;
                r--;
                ans -= 2;
            }else{
                break;
            }
        }

       cout<<ans<<endl;


    }
}    