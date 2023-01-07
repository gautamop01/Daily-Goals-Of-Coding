// This Problem is from Code Chef Practice section.
/*
Chef is participating in an ICPC regional contest, in which there is a total of NN problems (numbered 11 through NN) with varying difficulties. For each valid i, the i-th easiest problem is problem Ai.
​
After a team solves a problem, a balloon with a colour representing that problem is tied next to their desk. Chef is fond of colours in VIBGYOR, which are representative of the problems with numbers 11 through 77. The remaining problems have their own representative colours too.

Find the minimum number of problems which Chef's team needs to solve in order to get all the balloons for problems 11 through 77 (and possibly some other balloons too) tied next to their desk, if you know that Chef's team knows the difficulties of all problems and solves the problems in increasing order of difficulty.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN.
The second line contains NN space-separated integers A_1, A_2, \ldots, A_NA 

Output
For each test case, print a single line containing one integer ― the minimum number of problems Chef's team needs to solve.

Constraints
1 \leq T \leq 10,5001≤T≤10,500
7 \leq N \leq 157≤N≤15
1 \leq A_i \leq N1≤A 
​
Sample 1:
Input
7
1 2 3 4 5 7 6
Output
7

Input
8
8 7 6 5 4 3 2 1
Output
8

Input
9
7 4 3 5 6 1 8 2 9
Output
8


Explanation:
Example case 1: Since there are a total of 77 problems, Chef's team will have to solve all of them.

Example case 2: Problems 11 through 77 appear among the first 88 problems.

Example case 3: Problems 11 through 77 again appear among the first 88 problems.

*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int cnt = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1 || arr[i] == 2 || arr[i] == 3 || arr[i] == 4 || arr[i] == 5 || arr[i] == 6 || arr[i] == 7)
                cnt = i + 1;
        }
        cout << cnt << endl;
    } 

    return 0;
}
