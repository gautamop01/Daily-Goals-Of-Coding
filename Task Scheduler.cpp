//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int leastInterval(int n, int k, vector<char> &s) {
        // code here
        
          map<int,int> mp;
        for(int i=0;i<n;i=i+1)
        {
           mp[s[i]-'A']++;
        }
        int mx=0;
        for(int i=0;i<26;i=i+1)
        {
            if(mp[i]>mx)
            {
                mx=mp[i];
            }
            
        }
        int c=0;
        for(int i=0;i<26;i=i+1)
        {
            if(mp[i]==mx)
            {
                c=c+1;
            }
        }
        int ans=mx+k*(mx-1)+c-1;
        
        return max(ans,n);
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends
