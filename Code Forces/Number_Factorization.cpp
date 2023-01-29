#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;
        cin>>n;
        int c=n;
        int max=1;S
        map<int, int>mp;
        for(int i=2; i*i<=n; i++){
            if(c%i==0){
                int cnt=0;
                while(c%i==0){
                    cnt++;
                    c/=i;
                }
                mp[i]=cnt;
                if(cnt>max)
                max=cnt;
            }
        }
        if(c!=1)
        mp[c]=1;
        int pra=0;
        for(int i=0; i<=max; i++){
            int curr=1;
            for(auto it:mp){
                if(it.second>0){
                    mp[it.first]--;
                    curr*=it.first;
                }
            }
            pra+=curr;
        }
        cout<<pra-1<<endl;
    }
    return 0;
}