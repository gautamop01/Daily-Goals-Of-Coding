/*
Problem
You are given three distinct integers A, B, and C.
Find any integer X (0 X <2") such that
(AX)< (Be X) < (Ce X), where denotes the Bitwise XORoperation.
If no such X exists, print l instead.
Input Format
The first line of the input contains a single integer T, the number of test cases.
.The first and only line of each test case contains three space-separated integers A, B, and C.
Output Format
For each test case, output a single integer on a new line, the value of X that satisfies the above
conditions or -1 if no such X exists.
if multiple such X satisty the condition, you may print any.
Constraints
1T<10
1SA, B, C < 230
A, B, C are distinct .
*/

#include <iostream>
using namespace std;

void solve(){
     int a,b,c;
    cin>>a>>b>>c;
    long long x,low,high,mid;
    x=low=-1; low++;
    high= (1ll<<30)-1;
    while (low<=high){
        mid = (low + high)/2;
        if ((a^mid) < (b^mid) and (b ^ mid) < (c ^ mid)) {
            x = mid;
            break;
        }
        else if ((a ^ mid)<(b ^ mid)) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    cout <<x<< endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
