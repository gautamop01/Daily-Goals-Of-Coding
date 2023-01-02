// This Question asked in amazone and oracle  

/*
Given an array arr[] of size N.
The task is to find the first repeating element in the array of integers,
 i.e., an element that occurs more than once and whose index of first occurrence is sammlest.

 Constrainsts:
1 <= N <= 10 to the power 6
0 <= Ai <= 10 to the power 6

Example ->
Input:
7
1 5 3 4 3 5 6
Output:
2

Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring indedx is 3.

So basically BASE IDEA IS :
To check if a element is repeating, we maintain an array idx[], which stores the first occurence (index)
of a particular element a[i].

> Initialise the idx[] with -1 and minidx with INT_MAX
  -1    -1   -1    -1      -1     -1    -1  -1
  (0)   (1)  (2)   (3)     (4)    (5)   (6)  (7)

> Keep updating idx[], while traversing the given array.
Given Array:  1  5   3  4   3  5    6
.
.
.      <-- BASE IDEA <--
.
.
*/

// Lets do it code
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
    const int N = 1e6 + 2; // declare a N = 1o to the power 6 + 2
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
    return 0;
}
// Thanks 
