//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        if(k >= n) return n;
        
        int l=1,h=n;
        bool front = true;
        
        while(l<h){
            if(front){
                l += k;
            }
            else{
                h -= k;
            }
            
            front = !front;
            
            if(abs(h-l) < k){
                break;
            }
        }
        
        return (front) ? h : l;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
