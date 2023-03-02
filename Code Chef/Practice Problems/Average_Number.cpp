/*
###Read problems statements Mandarin, Bengall, Hindi, RusSian and Vietnamese as well.
Chef had a sequence of positive integers with length N+ K. He managed to calculate the arithmetic average of all
elements of this sequence (let's denote it by V), but then, his little brother deleted K elements from it. All deleted
elements had the same value.
Chef still knows the remaining N elements-a sequence A1, d2.. . , Ay. Help him with restoring the original
sequence by finding the value of the deleted elements or deciding that there is some mistake and the described
Scenario is impossible.
Note that the if it is possible for the deleted elements to have the same value, then it can be proven that it is unique.
Also note that this value must be a positive integer
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test
cases follows.
The first line of each test case contains three space-separated integers N, K and V.
The second line contains N space-separated integers A1 A2,... , Ay
Output
For each test case, print a single line containing one integer - the value of the deleted elements, or -1 if there is a
mistake.
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        int a[n];
        int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int p=n+k;
      int ori_sum = p*v ;
      int del_sum = ori_sum - sum;
      int del_val = del_sum/k;
      
      if(del_val > 0 && ori_sum == sum + k*del_val){
          cout<<del_val<<endl;
      }else{
          cout<<"-1"<<endl;
      }
    }
	// your code goes here
	return 0;
}
