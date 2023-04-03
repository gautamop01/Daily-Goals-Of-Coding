/*Read problem statements in Mandarin, Bengal, Russian, and
Vietnamese as wel.
You are given an integer N. Consider the sequence containing the integers 1,2,.. . , N
in increasing order (each exactly once). Find the maxlmum length of Its contiguous
subsequence with an even sum.
Input Format
The first line of the input contains a single integer T denoting the number of test
cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output Format
For each test case, print a single line containing one integer - the maximum length of
a contiguous subsequence with even sum.
Constraints
1Ts 10
2NS 10
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int cnt =0;
        for(int i=1;i<=n;i++){
            cnt+=i;
        }
        if(cnt%2==0){
            cout<<n<<endl;
        }else{
            cout<<n-1<<endl;
        }
    }
	// your code goes here
	return 0;
}

