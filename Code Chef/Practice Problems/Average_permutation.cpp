/*You are given an integer N.
Find a permutation P= |h, Pa, ... , Pw] of the integers {1,2,..., N} such that sum of averages of all
consecutive triplets is minimized, I.e.
P+P1+Pi2
=l
is minimized.
If multiple permutations are possible, print any of them.
Input Format
The first line of Input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains an integer N, the size of the permutation.
Output Format
For each test case, output on a new line a permutation which satisfies the above conditions.
Constraints
1Ts 1000
3N 10
The sum of N over all test cases won't exceed 3. 10°.
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, x = 1;

        // Taking the input value of N, the size of the permutation.
        cin >> n;

        // Creating an array of size N to store the permutation.
        int a[n];

        // Initializing the first four elements of the permutation in the required order.
        a[0] = n;
        a[1] = n - 3;
        a[n - 1] = n - 1;
        a[n - 2] = n - 2;

        // Filling the remaining elements of the permutation in increasing order.
        for(int i = 2; i < n; ++i)
        {
            // Skipping the last two elements, as they have already been initialized.
            if((i != n - 1) && (i != n - 2))
            {
                a[i] = x;
                x++;
            }
        }

        // Printing the permutation.
        for(int i = 0; i < n; ++i)
            cout << a[i] << " ";

        cout << endl;
    }
    return 0;
}
