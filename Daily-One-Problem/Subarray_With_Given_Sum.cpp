/*
This Question asked in FACAEBOOK, GOOGLE, AMAZON AND VISA

Problem - Given an unsorted array A of size N of non-negative integers,
find a continuous subarray which adds to a given number S.

Constraints:
1 <= N <= 10 to the power 5
0 <= Ai <= 10 to the power 10

Example:
Input :
N = 5, S = 12
A[] = {1,2,3,7,5}

Output : 2 4

Explanation: The sum of elements from 2nd position to 4th position is 12.

Bruet Force Approach: Find Sum of all possible subarrays.
if any of the equates to S, output the string and ending index of the subarray
Time Complexity : O(n)

*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}
// Thanks 
