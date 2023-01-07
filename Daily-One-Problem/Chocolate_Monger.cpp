/*
There are nn chocolates, and you are given an array of nn numbers where the i-th number Ai 
is the flavour type of the i-th chocolate. Sebrina wants to eat as many different types of chocolates as possible, but she also has to save at least xx number of chocolates for her little brother.
Find the maximum possible number of distinct flavour types Sebrina can have.

###Input:

The first line contains an integer T --- the number of test cases.

The first line of each test case consists of two integers n, x - The number of chocolates Sabrina has and the number of chocolates she has to save for her brother, respectively.

The second line contains nn integers Ai 

###Output:

For each test case, output a single integer denoting the maximum possible number of distinct chocolate flavours Sabrina can eat.


Sample 1:
Input
2 1
1 2
Output
1


Input
4 2
1 1 1 1
Output
1

Input
5 3
50 50 50 100 100
Output
2


Explanation:
Test case 11: In the first case, the maximum number of chocolates Sebrina can have is 11 as she has to leave 11 chocolate for her brother. Thus, the maximum number of distinct chocolates is also 11.

Test case 22: Sebrina has to leave 22 chocolates for her brother. She can eat any 22 chocolates. Since all the chocolates have the same flavor, it does not matter which chocolates she eats. The maximum number of distinct chocolates would be 11.

Test case 33: Sebrina needs to save 33 chocolates for her brother. She can eat any 22 chocolates. To maximize the number of distinct chocolates, she can eat chocolates 11 and 55 with flavors 5050 and 100100 respectively. Thus maximum number of distinct chocolates is 22.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        int cnt = 1;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                cnt++;
            }
        }
        cout << min((n - x), cnt) << endl;
    }
    return 0;
}
