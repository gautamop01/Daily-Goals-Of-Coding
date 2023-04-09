/*
To thank Ian, Mary gifted an array a
 of length n
 to Ian. To make himself look smart, he wants to make the array in non-decreasing order by doing the following finitely many times: he chooses two adjacent elements ai
 and ai+1
 (1≤i≤n−1
), and increases both of them by 1
 or decreases both of them by 1
. Note that, the elements of the array can become negative.

As a smart person, you notice that, there are some arrays such that Ian cannot make it become non-decreasing order! Therefore, you decide to write a program to determine if it is possible to make the array in non-decreasing order.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The first line of each test case consists of a single integer n
 (2≤n≤3⋅105
) — the number of elements in the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 3⋅105
.

Output
For each test case, output "YES" if there exists a sequence of operations which make the array non-decreasing, else output "NO".

You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as positive answer).
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool is_possible = true;
        int i = n - 1;
        while (i > 0) {
            if (arr[i] < arr[i - 1]) {
                if (i - 1 == 0)
                    is_possible = false;
                else
                    arr[i - 2] -= (arr[i - 1] - arr[i]);
            } else {
                if (i - 2 >= 0)
                    arr[i - 2] += (arr[i] - arr[i - 1]);
            }
            i -= 2;
        }

        if (is_possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// Codeforces Round 865 (Div. 2)
