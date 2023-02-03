// Gautam Kumar Mahar
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define endl "\n"


void solve(){
   ll n; cin>>n;
   string s; cin>>s;
   map<char,ll>mp1,mp2;
   vector<ll>v1(n,0),v2(n,0);
   v1[0]=1;
   mp1[s[0]]++;
   for(ll i=1; i<n; i++){
       if(mp1.find(s[i])==mp1.end()){
           v1[i]=1+v1[i-1];
       }
       else{
           v1[i]=v1[i-1];
       }
       mp1[s[i]]++;
   }
   v2[n-1]=1;
   mp2[s[n-1]]++;
  for(ll i=n-2; i>=0; i--){
      if(mp2.find(s[i])==mp2.end()){
          v2[i]=1+v2[i+1];
      }
      else{
           v2[i]=v2[i+1];
       }
      mp2[s[i]]++;
  }
  ll ans=0;
  for(ll i=0; i<n; i++){
      ans=max(ans,v1[i]+v2[i]);
  }
  if(ans>n) ans=n;
  cout<<ans<<endl;
}

int main(){
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 ll t; cin>>t;
 while(t--){
     solve();
 }
 return 0;
}