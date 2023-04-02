/*
There is an array a consisting of non-negative integers. You can choose an integer and denote b;= a; r for all l<in, where e
denotes the bitwise XOR operation. Is it p0ssible to choose such a number z that the value of the expression b1 B b2 . equals
?
It can be shown that if a valid number t exists, then there also exists a such that (0 ST < 2).
Input
Each test contains multiple test cases. The first line contains the number of test cases t (1<t<1000). The description of the test cases
follows.
The first line of the test case contains one integer n (1 Sn<10)-the length of the array a.
The second line of the test case contains n integers array a (0 a; < 2°).
It is guaranteed that the sum of n over all test cases does not exceed 10.
Output
For each set test case, print the integer T (0 T<2) it t exists, or-1 otherwise.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[5];
        for(int i=1;i<=4;i++)
            cin>>a[i];
        sort(a+1,a+5);
        if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0)
            cout<<0<<endl;
        else if(a[1]==0&&a[2]==0&&a[3]==0)
            cout<<1<<endl;
        else if(a[1]==0&&a[2]==0)
            cout<<2<<endl;
        else if(a[1]==0)
            cout<<3<<endl;
        else
            cout<<4<<endl;
    }
    return 0;
}
