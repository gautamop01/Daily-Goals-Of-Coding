/*Chef wants to impress Chefina by giving her the maximum number of gifts possible.

Chef is in a gift shop having NN items where the cost of the i^{th}ith item is equal to A_{i}Ai. 
Chef has KK amount of money and a 50 \%50% off discount coupon that he can use for at most one of the items he buys.

If the cost of an item is equal to XX, then, after applying the coupon on that item, Chef only has to pay {\bf \left\lceil \frac{X}{2} \right\rceil}⌈2X⌉ (rounded up to the nearest integer) amount for that item.
Help Chef find the maximum number of items he can buy with KK amount of money and a 50 \%50% discount coupon given that he can use the coupon on at most one item.

Input Format -
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains two space-separated integers NN and KK.
The next line contains NN space-separated integers.

Output Format -
For each test case, print a single line containing one integer ― the maximum number of items Chef can buy.

Sample 1:
Input
1 4
5
Output
1

-----------

Input
3 15
4 4 5
Output
3

-----------

Input
3 10
6 7 4
Output
2

---------------

Explanation:
Test case 11: After applying the discount, Chef can buy the only available item at ...

Test case 22: Chef can buy all three items even without using the coupon.

Test case 33: After applying coupon on the third item, Chef can buy the second and the third item at ....
It is not possible for Chef to buy more than two items.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	   int cnt=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(k>=a[i]){
	            k=k-a[i];
	            cnt++;
	        }
	        else{
	            if(k>=(a[i]+1)/2){
	                cnt++;
	                break;
	            }
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}
// Thanks.
