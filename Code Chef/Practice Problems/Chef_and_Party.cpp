/*Tonight, Chef would like to hold a party for his N friends.
All friends are invited and they arive at the party one by one in an arbitrary order.
However, they have certain conditions for each valid i, when the i-th friend arrives
at the party and sees that at that point, strictly less than A; other people (excluding
Chef have joined the party, this friend leaves the party; otherwise, this friend joins the
party.
Help Chef estimate how successful the party can be find the maximum number of
his friends who could join the party (for an optimal choice of the order of arrivals)
Input
The first line of the input contains a single integer T denoting the number of test
cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1, A2,... , Ay.
Output
For each test case, print a single line containing one integer- the maximum number
of Chef's friends who could join the party.
Constraints
.1T< 1,000
1N 105
the sum of N over all test cases does not exceed 10*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt=0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]<=cnt){
                cnt++;
            }
          
        }
        cout<<cnt << endl;
        
}
    // your code goes here
    return 0;
}
