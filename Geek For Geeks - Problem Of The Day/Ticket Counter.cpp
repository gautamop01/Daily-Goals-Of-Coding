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
