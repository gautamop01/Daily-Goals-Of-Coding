/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> find(int arr[], int n, int x) {
        vector<int> ans;
        vector<int> rev(arr, arr + n);

        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                ans.push_back(i);
                break;
            }
        }

        reverse(rev.begin(), rev.end());

        for (int i = 0; i < n; i++) {
            if (rev[i] == x) {
                ans.push_back(n - 1 - i);
                break;
            }
        }

        return ans;
    }
};
*/


// #include <bits/stdc++.h>
// using namespace std;

// bool flag = false;  // for printing only one subsequence
// void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
//     if(ind ==n){
//         if(s == sum && flag == false){
//             flag = true;
//             for(auto it : ds) cout << it << " ";
//             cout << endl;
//         }
//         return;
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];

//     printS(ind+1,ds,s,sum,arr,n);

//     s-=arr[ind];
//     ds.pop_back();

//     printS(ind+1,ds,s,sum,arr,n);

    
// }

// int main(){
//     int arr[] = {1, 2, 1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);
//     return 0;
// }  



#include <bits/stdc++.h>
using namespace std;

int printS(int ind, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s==sum) return 1;
        else return 0;
    }

    s+=arr[ind];
    int l = printS(ind + 1, s, sum, arr, n);
    s-=arr[ind];
    int r = printS(ind+1,s,sum,arr,n);
    return l+r;
    
}

int main(){
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
   int ans = printS(0, 0, sum, arr, n);
   cout<<ans<<endl;
    return 0;
}  
