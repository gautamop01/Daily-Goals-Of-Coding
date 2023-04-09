// Codeforces Round 865 (Div. 2)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 10000000007;
const ll SIZE = 1000002;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll i, j, k, n, m;
        cin >> n;

        vector<vector<ll>> res(2,vector<ll>(n));
        ll max_val = 2*n;
        res[0][0] = max_val;
        res[1][n-1] = max_val-1;
        ll front_val = 1, back_val = max_val-2;
        i = 0, j = 0;

        while(i < n-1){
            if(i % 2 != 0){
                res[1][i] = back_val-1;
                res[0][i+1] = back_val;
                back_val -= 2;
            }
            else{
                res[1][i] = front_val;
                res[0][i+1] = front_val+1;
                front_val += 2;
            }
            i++;
        }

        while(j < 2){
            k = 0;
            while(k < n){
                cout << res[j][k] << " ";
                k++;
            }
            cout << endl;
            j++;
        }
    }
    return 0;
}
/*
Consider a 2×n
 grid, where n
 is an even integer. You may place the integers 1,2,…,2n
 on the grid, using each integer exactly once.

A path is a sequence of cells achieved by starting at (1,1)
, then repeatedly walking either downwards or to the right, and stopping when (2,n)
 is reached. The path should not extend beyond the grid.

The cost of a path is the alternating sum of the numbers written on the cells in a path. That is, let the numbers written on the cells be a1,a2,…,ak
 (in the order that it is visited), the cost of the path is a1−a2+a3−a4+…=∑ki=1ai⋅(−1)i+1
.

Construct a way to place the integers 1,2,…,2n
 on the grid, such that the minimum cost over all paths from (1,1)
 to (2,n)
 is maximized. If there are multiple such grids that result in the maximum value, output any of them.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. The description of test cases follows.

The first and the only line of each test case contains a single integer n
 (2≤n≤105
, n
 is even) — the number of the columns in the grid.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output 2
 lines, each containing n
 integers — the desired grid. If there are multiple solutions, output any of them.
*/
