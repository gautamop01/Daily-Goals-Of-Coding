/*B. Not Dividing
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array of n
 positive integers a1,a2,…,an
. In one operation, you can choose any number of the array and add 1
 to it.

Make at most 2n
 operations so that the array satisfies the following property: ai+1
 is not divisible by ai
, for each i=1,2,…,n−1
.

You do not need to minimize the number of operations.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤104
) — the length of the given array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the given array.

It is guaranteed that the sum of n
 over all test cases does not exceed 5⋅104
.

Output
For each test case, print the answer on a separate line.

In the only line, print n
 integers — the resulting array a
 after applying at most 2n
 operations.

We can show that an answer always exists under the given constraints. If there are multiple answers, print any of them.

*/
#include<bits/stdc++.h> 
using namespace std; 
 
 int main(){
    int testop; 
    cin>>testop; 
    while(testop--){ 
 
   int n; 
    cin>>n; 
    vector<int>a(n);
    for(int i=0;i<n;i++){ 
        cin>>a[i];
        a[i]==1?a[i]++:a[i]; 
    } 
    for(int i=0;i<n-1;i++) 
    (a[i+1]%a[i]!=0)?a[i+1]:a[i+1]++;
    for(int i=0;i<n;i++) 
    cout<<a[i]<<" \n"[i==n-1]; 
} 
return 0;
}
