/*
This asked By Accolite, amazone, samsung and snapdeal

Problem - You are given an array arr[] of N integers including 0. The task is to find the smallest
positive number missing from the array.

Constraints:
1 <= N <= 1e6  // 10 to the power 6
-10e6 <= Ai <= 1e6

Example :
Input:
6
0  -9  1   3  -4   5

Output: 
2
*/

// lets code !
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}