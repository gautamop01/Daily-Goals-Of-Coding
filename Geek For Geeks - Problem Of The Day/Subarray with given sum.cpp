//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
 /* Class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
    
    vector<int> ans;
    vector<int> last;
    last.push_back(-1);
    
    for(int i=0;i<n;i++){
        int curr=0;
        curr+=arr[i];
        if(curr==s){
            ans.push_back(i+1);
            ans.push_back(i+1);
            return ans;
        }
        for(int j=i+1;j<n;j++){
            curr+=arr[j];
            if(curr==s){
            ans.push_back(i+1);
            ans.push_back(j+1);
            return ans;
            }
            
        }
    }
    return last;
    }
};*/
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int sum = 0;
        int i = 0 ,j =0, cnt = 0;
        vector <int> ans;
        ans.push_back(-1);
        while(j < n){
            sum += arr[j];
            cnt++;
            while(sum > s){
                sum -= arr[i];
                cnt--;
                i++;
            }
            if(sum == s && cnt > 0){
                ans[0] = (i+1);
                ans.push_back(j+1);
                break;
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
